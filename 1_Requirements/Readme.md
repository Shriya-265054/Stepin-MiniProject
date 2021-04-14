# Requirements

## Introduction

- Bank Management System is a application, the project focuses on customer's account services in a bank. This application has several services such as accepting information for record, to deposit and withdraw an amount, searching the information in the record, interests and displaying the balance on the screen also the data is secured using login credentials etc. This project is made using structures and functions in c programming language.
- This work is taken from [http://www.cprogrammingnotes.com/question/banking-system.html](http://www.cprogrammingnotes.com/question/banking-system.html) and this is an improvement on it.
 - For this project, we require C Programming, makefile and Unit Testing using Unity.
 - Basic knowledge of structures and functions would be helpful to understand.

 ## Features
 
 - Using this application for bank related work such as deposite, withdraw etc.
 - User friendly application.

## SWOT Analysis
![SWOT ANALYIS](https://github.com/Shriya-265054/Stepin-MiniProject/blob/main/.github/workflows/swot.PNG)

 # 4W's and 1'H
## Who:  
This application can be used by people having a valid bank account.
## What:
Bank Management System is a application, the project focuses on customer's account services in a bank. This application has several services such as accepting information for record, to deposit and withdraw an amount, searching the information in the record, interests and displaying the balance on the screen also the data is secured using login credentials etc. This project is made using structures and functions in c programming language.
## When:
The application is made as a part of LTTS Step-in Mini Project work.
## Where:
It is made using Visual Studio Code IDE on Windows 10.
## How:
A simple project which has multi-files in it and the program is made using structures and functions in C Programming Language.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | Customer can create new account | Techincal | IMPLEMENTED | 
| HR02 | Account holder should be able add his/her required infomation | Techincal |  IMPLEMENTED  |
| HR03 | Account holder should be able to update his personal information | Techincal |  IMPLEMENTED  |
| HR04 | Account holder should be able to search and view his/her details | Techincal |  IMPLEMENTED  |
| HR05 | Account holder should be able to deposit money | Techincal |  IMPLEMENTED  |
| HR06 | Account holder should be able to withdraw money | Techincal |  IMPLEMENTED  |
| HR07 | Account holder should be able to view current balance | Technical | IMPLEMENTED |

##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | -1. New account shall be added by providing all the required information                                                                                                               -2. Account number should be unique and validated else account holder's record should not be provided. | HR01 |  IMPLEMENTED  |
| LR02 | Adding account holder's data should be possible in 2 ways (1). first being by searching by account number of a account holder (2). By accepting all the records provided | HR02 |  IMPLEMENTED |
| LR03 | While reading all the records, only 10 records per page should be visible and should add 10 more if user wants to see more | HR02 | FUTURE |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed | HR02 |  IMPLEMENTED  |
| LR05 | User need to search by id for the pateint record to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 |  IMPLEMENTED  |
| LR06 | User need to search by id for the pateint record to be deleted, if no such record is available then "No Record Found" Message should be displayed | HR04 |  IMPLEMENTED  |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 |  IMPLEMENTED  |
| LR06 | If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution | HR05, HR06, HR07, HR08 |  IMPLEMENTED  |
| LR07 | When user Log off the system perform check and save data to file (1). If new data in inserted add it to file (2). If New data is not inserted do not add anything to file | HR08 |  IMPLEMENTED  |
