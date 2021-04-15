# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if Account is created or not                        | (1). NULL Pointer (2). Account number (3). Name (4). Age (5). Address (6). Citizenship (7). Phone number  (8). Account type (9). Initial Balance (10) Date of birth | Pointer to structure | PASS | Requirement based|
|  H_02   |Check Addition of new information | (1). Struct (2). Account number (3). Name (4). Age (5). Address (6). Citizenship (7). Phone number  (8). Account type (9). Initial Balance (10) Date of birth | SUCCESS |SUCCESS|Requirement based |
| H_02_01 | Check if during addition account number exists | (1). Account number (2). Struct pointer | SUCCESS | SUCCESS | Requirement based |
| H_02_02 | Check if during addition account number doesn't exists | (1). Account number (2). Struct pointer | NO_ACC_EXISTS | NO_ACC_EXISTS | Technical |
| H_03 | Check Updation of information | (1). Account number (2). Search function| SUCCESS | SUCCESS | Requirement based |
| H_03_01 | Check if account number exists | (1). Account number (2). Search function (3). Field to be updated | SUCCESS | SUCCESS | Requirement based |
| H_03_02 | Check if account number doesn't exists | (1). Account number (2). Search function | NO_ACC_EXISTS | NO_ACC_EXISTS | Requirement based |
| H_04 | Check if account exists | (1). Account number (2). Display Flag | SUCCESS | SUCCESS | Requirement based |
| H_04_01 | Check if account number exists | (1). Struct pointer (2). Account number | SUCCESS | SUCCESS | Technical |
| H_04_02 | Check if account number doesn't exists | (1). Struct Pointer (2). Account number | NO_ACC_EXISTS | NO_ACC_EXISTS | Technical |
| H_05 | Deposit amount | (1). Struct pointer (2). Account number (3). Amount to be deposited | SUCCESS| SUCCESS | Requirement based |
| H_05_01 | Check if account number exists | (1). Struct pointer (2). Account number (3). Amount to be deposited | SUCCESS | SUCCESS | Technical |
| H_05_02 | Check if account number doesn't exists | (1). Struct pointer (2). Account number | NO_ACC_EXISTS | NO_ACC_EXISTS | Technical |
| H_06 | Withdraw amount | (1). Struct pointers (2). Account number  | SUCCESS | SUCCESS | Technical |
| H_06_01 | Check if account number exists | (1). Struct pointers (2). Account number (3). Amount to be withdrawn| SUCCESS | SUCCESS | Requirement based |
| H_06_02 | Check if account number doesn't exists | (1). Struct pointers (2). Account number (3).Return | NO_ACC_EXISTS | NO_ACC_EXISTS | Requirement based |
| H_07 | Display of account information | (1). Struct Pointer (2) Account number | SUCCESS | SUCCESS | Technical |



## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |H_02|Addition of information| (1). Struct Pointer (2). Account number| SUCCESS | SUCCESS |Requirement based |
|  L_01_02    |H_02|Account number during addition doesn't exists, do not allow addition|  (1). Struct Pointer (2). Account number| NO_ACC_EXISTS |NO_ACC_EXISTS|Scenario based|
|  L_02       |H_03,H_04,H_05,H_06|Update, Search, Deposit, Withdraw | (1). Account number |SUCCESS | SUCCESS |Technical|
|  L_02_02      |H_03,H_04,H_05,H_06|If account number doesn't exists then return |(1). Account number (2). Flag |NO_ACC_EXIST | NO_ACC_EXIST |Technical|
|  L_03       |H_07|Display account information |(1). Account number | SUCCESS | SUCCESS  |Technical|
