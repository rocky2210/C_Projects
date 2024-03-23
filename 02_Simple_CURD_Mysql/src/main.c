#include "curd.h"
#include "../include/utils.h"

int main(){

    sqlite3 *db;
    const char *filename = "curd.db";

    // Open database
    int rc = sqlite3_open(filename,&db);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }

    // Create table if not exists
    create_table(db);

    int choice, id;
    char name[100], email[100];

    while (1) {
        printf(RED"\n\t\tMENU"reset);
        printf(CYN"\n1. Create User\n"reset);
        printf(CYN"2. Read Users\n"reset);
        printf(CYN"3. Update User\n"reset);
        printf(CYN"4. Delete User\n"reset);
        printf(CYN"5. Exit\n"reset);

        printf(YEL"Enter your choice: "reset);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf(BLU"Enter user's name: "reset);
                scanf("%s", name);
                printf(BLU"Enter user's email: "reset);
                scanf("%s", email);
                create_user(db, name, email);
                break;
            case 2:
                read_users(db);
                break;
            case 3:
                printf(BLU"Enter user ID: "reset);
                scanf("%d", &id);
                printf(BLU"Enter user's name: "reset);
                scanf(" %[^\n]", name); // Read utill till the newline
                printf(BLU"Enter user's email: "reset);
                scanf(" %[^\n]", email);
                update_user(db, id, name, email);
                break;
            case 4:
                printf(BLU"Enter user ID: "reset);
                scanf("%d", &id);
                delete_user(db, id);
                break;
            case 5:
                // Close the database
                sqlite3_close(db);
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
