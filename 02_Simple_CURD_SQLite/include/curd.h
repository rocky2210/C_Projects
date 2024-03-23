#ifndef CURD_H
#define CURD_H

#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>

// Functions Prototypes
void create_table(sqlite3 *db);
void create_user(sqlite3 *db,const char *name,const char *email);
void read_users(sqlite3 *db);
void update_user(sqlite3 *db,int id,const char *name, const char *email);
void delete_user(sqlite3 *db, int id);

#endif