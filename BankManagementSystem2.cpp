#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//-------------------Prototypes START
void addCustomer(string username, string password, string role);
string who();
char customerMenu();
char adminMenu();
void clearScreen();
void mainHeader();
void addCustomer();
void addCustomerIntoArray(string first_names, string last_names, int age, int phone_numbers, int Government_IDs, int Email_Address, string genders, string nationalitys, int residential_address, float account_types, float account_numbers, float branch_codes);
void netWorth();
int netWorthMenu();
void viewAllCustomers();
void upgradeBalance();
void viewYourInfo();
//-------------------Prototypes END

//-------------------Data Structures START

const int TOTAL_CUSTOMERS = 1000;
int count_customer = 0;
string username[TOTAL_CUSTOMERS];
string password[TOTAL_CUSTOMERS];
string roles[TOTAL_CUSTOMERS];

const int TOTAL_CUSTOMERS = 1000;
int count_customers = 0;
string first_nameArrayA[TOTAL_CUSTOMERS];
string last_nameArrayA[TOTAL_CUSTOMERS];
int ageArrayA[TOTAL_CUSTOMERS];
int phone_numberArrayA[TOTAL_CUSTOMERS];
int Government_IDArrayA[TOTAL_CUSTOMERS];
int Email_AddressArrayA[TOTAL_CUSTOMERS];
string genderArrayA[TOTAL_CUSTOMERS];
string nationalityArrayA[TOTAL_CUSTOMERS];
string residential_AddressArrayA[TOTAL_CUSTOMERS];
string account_typeArrayA[TOTAL_CUSTOMERS]; // Savings,Current etc.
float account_numberArrayA[TOTAL_CUSTOMERS];
float branch_codeArrayA[TOTAL_CUSTOMERS];

bool nameDelete = false;
string loginCustomerName="";

//-------------------Data Structures END

int main() // main function implimentation
{
    addCustomer("admin", "123", "ADMIN");
    addCustomer("faiq", "123", "CUSTOMER");

    while (true)
    {
        string w = who();
        if (w == "ADMIN")
        {
            system("cls");
            char adminOption = "";
            while (true)
            {

                adminOption = adminMenu();
                if (adminOption == "1")
                {
                    addCustomer();
                }
                if (adminOption == "2")
                {
                    viewAllCustomers();
                }
                if (adminOption == "3")
                {
                    // Update customer record
                }
                if (adminOption == "4")
                {
                    // Generate balance
                }
                if (adminOption == "5")
                {
                    upgradeBalance();
                }
                if (adminOption == "6")
                {
                    netWorth();
                }
                if (adminOption == "7") // Delete record by name
                {
                    cout << "Press 3 to delete the name" << endl;
                    string name;
                    cin >> name;
                    if (name == '3')
                    {
                        nameDelete = true;
                    }
                }
                if (adminOption == "8")
                {
                    break;
                }
                else
                {
                    cout << "Wrong output. Try Again!" << endl;
                }
                void clearScreen();
            } // End of while loop for admin menu
        }
        else
            (w == "CUSTOMER")
            {
                char customerOption = "";
                while (true)
                {
                    customerOption = customerMenu();
                    if (customerOption = "1")
                    {
                        viewYourInfo();
                    }
                    else if (customerOption = "2")
                    {
                        if (nameDelete = true)
                        {
                        }
                        else
                        {
                            cout << "Your name is not deleted yet!" << endl;
                        }
                    }
                    else if (customerOption = "3")
                    {
                        // Changing password
                    }
                    else if (customerOption = "4")
                    {
                        // Logout
                    }
                    else
                    {
                        cout << "You choose wrong option!" << endl;
                    }
                }
            }
        else
        {
            cout << "Wrong username or password";
        }
    }
} // main END

//------------------Function implimentations START

void viewYourInfo()
{
  if(loginCustomerName!="")
  {
    for(int i=0;i<count_customers;i++)
    {
        if(username==loginCustomerName)
        {
            cout<<username<<"First_name\tLast_name\tAge\tPhone_number\tGovernment_ID\tEmail_address\tGender\tNationality\tResidentialAddress\tAccountNumber\tAccounttype\tBranchcode" << endl;
}
        }
    }
  }
}

void upgradeBalance()
{
    cout << "Enter username";
    string username;
    cin >> username;
    cout << "Enter password";
    string password;
    cin >> password;
    cout << "Enter Role ADMIN or CUSTOMER  in capital";
    string role;
    cin >> role;
    addCustomer(username, password, role);
}

string who()
{
    string username;
    cout << "Enter the username:";
    cin >> username;
    string password;
    cout << "Enter the password:";
    cin >> password;
    for (int i = 0; i < TOTAL_CUSTOMERS; i++)
    {
        if (username[i] == username && password[i] == password)
        {
            loginCustomerName=username;
            return roles[i];
        }
    }
    loginCustomerName="";
    return "Wrong";
}
void addCustomer(string username, string password, string role);
{
    if (count_customer < TOTAL_CUSTOMERS)
    {
        username[count_customer] = username;
        password[count_customer] = password;
        roles[count_customer] = role;
        count_customer = count_customer++;
    }
    else
    {
        cout << "No more space to add new customers" << endl;
    }
}
void mainHeader()
{
    cout << "|=============================================|" << endl;
    cout << "|==========Bank Management System=============|" << endl;
    cout << "|=============================================|" << endl;
}
char adminMenu()
{
    mainHeader();
    cout << "1.Show all customers" << endl;
    cout << "2.Search customer" << endl;
    cout << "3.Update customer record" << endl;
    cout << "4.Generate balance" << endl;
    cout << "5.Upgrade customer balance" << endl;
    cout << "6,Show customers net worth" << endl;
    cout << "7.Delete record by name" << endl;
    cout << "8.Logout" << endl;
    char option;
    cin >> option;
    return option;
}
char customerMenu()
{
    mainHeader();
    cout << "Customer Main Menu" << endl;
    cout << "1.View Your Profile" << endl;
    cout << "2.Check name status" << endl;
    cout << "3.Change password" << endl;
    cout << "4.Logout" << endl;
    cout << "Choose your option:";
    char option;
    cin >> option;
    return option;
}
void clearScreen()
{
    cout << "Press any key to continue.." << endl;
    getch();
    system("cls");
}
void addCustomer()
{
    cout << "Enter your first name:";
    string first_names;
    cin >> first_names;
    cout << "Enter your last name:";
    string last_names;
    cin >> last_names;
    cout << "Enter your age:";
    int age;
    cin >> age;
    cout << "Enter your phone number:";
    int phone_numbers;
    cin >> phone_numbers;
    cout << "Enter your Government ID:";
    int Government_IDs;
    cin >> Government_IDs;
    cout << "Enter your Email Address:";
    int Email_Address;
    cin >> Email_Address;
    cout << "Enter your gender:";
    string genders;
    cin >> genders;
    cout << "Enter your nationality:";
    string nationalitys;
    cin >> nationalitys;
    cout << "Enter your residential address:";
    string residential_address;
    cin >> residential_address;
    cout << "Enter your account type:";
    float account_types;
    cin >> account_types;
    cout << "Enter your account number:";
    float account_numbers;
    cin >> account_numbers;
    cout << "Enter your branch code:";
    float branch_codes;
    cin >> branch_codes;
    addCustomerIntoArray(first_names, last_names, age, phone_numbers, Government_IDs, Email_Address, genders, nationalitys, residential_address, account_numbers, account_types, branch_codes);
}
void addCustomerIntoArray(string first_names, string last_names, int age, int phone_numbers, int Government_IDs, int Email_Address, string genders, string nationalitys, int residential_address, float account_types, float account_numbers, float branch_codes)
{
    first_nameArrayA[count_customers] = first_names;
    last_nameArrayA[count_customers] = last_names;
    ageArrayA[count_customers] = age;
    phone_numberArrayA[count_customers] = phone_numbers;
    Government_IDArrayA[count_customers] = Government_IDs;
    Email_AddressArrayA[count_customers] = Email_Address;
    genderArrayA[count_customers] = genders;
    nationalityArrayA[count_customers] = nationalitys;
    residential_AddressArrayA[count_customers] = residential_Address;
    account_typeArrayA[count_customers] = account_types; // Savings,Current etc.
    account_numberArrayA[count_customers] = account_numbers;
    branch_codeArrayA[count_customers] = branch_codes;
    count_customers = count_customers++;
}
int netWorthMenu()
{
    mainHeader();
    cout << "Seat Management Menu" << endl;
    cout << "1.View net worth" << endl;
    cout << "2.Edit net worth" << endl;
    cout << "3.Back" << endl;
    int option;
    cin >> option;
    return option;
}
void netWorth()
{
    int worthOption = 0;
    while (true)
    {
        worthOption = netWorthMenu();
        if (worthOption = 1)
        {
            cout << "View your worth";
            float worth;
            cin >> worth;
        }
        else if (worthOption = 2)
        {
            cout << "Worth" << worth;
            float worth;
            cin >> worth;
        }
        else if (worthOption = 3)
        {
            break;
        }
        else
        {
            cout << "You eneterd wrong option!" << endl;
        }
        clearScreen();
    } // End of while loop
}
void ViewAllcustomers();
{
    cout << "First_name\tLast_name\tAge\tPhone_number\tGovernment_ID\tEmail_address\tGender\tNationality\tResidentialAddress\tAccountNumber\tAccounttype\tBranchcode" << endl;
}
for (int i = 0; i < index, i++)
{
    cout << first_nameArray[i] << "\t" << last_nameArray[i] << "\t" << ageArray[i] << "\t" << phone_numberArray[i] << "\t" << Government_ID[i] << "\t" << Email_Address[i] << "\t" << Gender[i] << "\t" << Nationality[i] << "\t" << residential_Address[i] << "\t" << account_number[i] << "\t" << account_type[i] << "\t" << branch_code[i] << endl;
}
//------------------Function implimentations END
