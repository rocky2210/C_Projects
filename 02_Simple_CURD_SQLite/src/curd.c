#include "../include/curd.h"
#include "../include/utils.h"

// Table creation
void create_table(sqlite3 *db){
    char *err_msg = 0;
    const char *sql = "CREATE TABLE IF NOT EXISTS users(id INTEGER PRIMARY KEY, name TEXT, email TEXT);";

    int rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

    if(rc != SQLITE_OK){
        fprintf(stderr, "SQL error: %s\n",err_msg);
        sqlite3_free(err_msg);
    }else{
        printf(GRN"Table created successfully"reset);
    }
}

// Function for create_user
void create_user(sqlite3 *db, const char *name, const char *email){
    char *err_msg = 0;
    char sql[100];

    sprintf(sql, "INSERT INTO users (name, email) VALUES ('%s', '%s');", name, email);

    int rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);
    } else {
        printf(GRN"User created successfully\n"reset);
    }
}

// Function for read_users
void read_users(sqlite3 *db){


    // Prepared statement
    /*
        https://www.sqlite.org/c3ref/stmt.html
        https://www.sqlite.org/c3ref/prepare.html
    */
    sqlite3_stmt *res;
    const char *sql = "SELECT * FROM users";

    int rc = sqlite3_prepare_v2(db,sql,-1,&res,0);

    if (rc == SQLITE_OK) {
        while (sqlite3_step(res) == SQLITE_ROW) {
            printf("ID: %d, Name: %s, Email: %s\n", sqlite3_column_int(res, 0),
                    sqlite3_column_text(res, 1), sqlite3_column_text(res, 2));
        }
    } else {
        fprintf(stderr, "Failed to execute statement: %s\n", sqlite3_errmsg(db));
    }

    sqlite3_finalize(res);
}


// Function for update_user 
void update_user(sqlite3 *db, int id, const char *name, const char *email) {
    char *err_msg = 0;
    char sql[100];

    sprintf(sql, "UPDATE users SET name='%s', email='%s' WHERE id=%d;", name, email, id);

    int rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);
    } else {
        printf(GRN"User updated successfully\n"reset);
    }
}

//Function for Delete user
void delete_user(sqlite3 *db, int id) {
    char *err_msg = 0;
    char sql[100];

    sprintf(sql, "DELETE FROM users WHERE id=%d;", id);

    int rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);
    } else {
        printf(GRN"User deleted successfully\n"reset);
    }
}