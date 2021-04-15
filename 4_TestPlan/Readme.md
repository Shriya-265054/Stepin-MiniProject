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
|  L_01       |H_02|During insertion check if ID is unique in INDEX.DAT file| (1). File Pointer (2). ID| SUCCESS | SUCCESS |Requirement based |
|  L_01_02    |H_02|Id f during insertion id alrady exists, do not allow insertion|  (1). File Pointer (2). ID| ID_ALREADY_EXISTS|ID_ALREADY_EXISTS|Scenario based|
|  L_03       |H_02,H_01,H_06,H_07|Check if file is properly opened during program execution| (1). File Name (2). File Mode (3). File Pointer|SUCCESS | SUCCESS |Technical|
|  L_04       |H_07,H_08|if data is loaded from file during startup then writing of file should begin from the start of file |(1). File pointers (2). Head Pointer (3). Flag |SUCCESS | SUCCESS |Technical|
|  L_05       |H_06|If there is only one node in list then deletion from beginning algorithm should work |(1). File pointers | SUCCESS | SUCCESS  |Technical|
|  L_06       |H_06|If first node is being deleted then deletion from beginning algorithm should work |(1). File pointers | SUCCESS | SUCCESS  |Technical|
