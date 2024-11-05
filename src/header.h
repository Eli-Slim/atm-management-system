#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <ctype.h>

#include <unistd.h>
#include <stdbool.h>
#include <termios.h>

// char *USERS = "./data/users.txt";
// const char *RECORDS = "./data/records.txt";

struct Date
{
    int month, day, year;
};

// all fields for each record of an account
struct Record
{
    int id;
    int userId;
    char name[100];
    int accountNbr;
    char country[100];
    int phone;
    double amount;
    char accountType[10];
    struct Date deposit;
    struct Date withdraw;
};

struct User
{
    int id;
    char name[50];
    char password[50];
};

// authentication functions
void loginMenu(char a[50], char pass[50]);
void registerMenu(char a[50], char pass[50]);
const char *getPassword(struct User *u);

// system function
void createNewAcc(struct User u);
void mainMenu(struct User u);
void checkAllAccounts(struct User u);
void get_input_str(char *data);
void get_input_int(int *option);
int getUserFromFile(FILE *ptr, char name[50], struct User *u);

#endif