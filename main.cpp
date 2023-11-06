#include <iostream>
#include <string>
using namespace std;
struct SERIAL_NUMBER
{
 float price;
 string number;
};
struct START_DATE
{
 int day;
 int month;
 int year;
};
struct RENEW_DATE
{
 int day;
 int month;
 int year;
};
struct LINE
{
 string mobile_number;
 string package_type;
 float balance;
 START_DATE date1;
 RENEW_DATE date2;
 int number_of_lines;
};
struct INFOBOOK
{
 int ID;
 string email;
 string name;
 string password;
 string address;
 LINE line;
};
const int Number_of_Users = 7;
const int Charge = 5;
INFOBOOK user[Number_of_Users];
SERIAL_NUMBER code[Charge];
float Message(int a, float bal[]);
float Call(int a, float bal[]);
float Recharge_Balance(int a, float bal[]);
float Subscribtion(int a, float bal[]);
float Transfer_Balance(int a, float bal[]);
int main()
{
 user[0] = { 001,"hamza@yahoo.com","hamza","142002#ha","korba,cairo","01001043030","140 GB",200.0,1,4,2020,30,5,2020,3 };
 user[1] = { 002,"samir@yahoo.com","samir","228394!ah","nasr city,cairo","01001757158","250 GB",35.0,5,8,2019,4,9,2019,2 };
 user[2] = { 003,"rama@yahoo.com","rama","41130&am","abbasia,cairo","01020386743","600 GB",20.0,1,2,2019,1,3,2019,1 };
 user[3] = { 004,"karam@yahoo.com","karam","20870*no","dokki,giza","01064009979","140 GB",100.0,13,6,2017,12,7,2017,3 };
 user[4] = { 005,"hassan@yahoo.com","hassan","70451^al'","sheikh zayed,cairo","01096697008","250 GB",500.0,14,8,2015,13,9,2015,2 };
 user[5] = { 006,"hamada@yahoo.com","hamada","23618$sa","al maadi,cairo","01001566022","600 GB",0.0,7,7,2018,6,8,2018,1 };

 code[0] = { 10.0,"87284661" };
 code[1] = { 25.0,"76173552" };
 code[2] = { 50.0,"43054421" };
 code[3] = { 100.0,"54165532" };

 int choice_number, id_of_user;
 string name_of_user;
 char choice_1;
 bool test_information = 0, test_character = 0;
 float Balance[Number_of_Users];
 for (int i = 0; i < Number_of_Users; i++)
 {
 Balance[i] = user[i].line.balance; 
 }
 cout << endl;
 cout << "Welcome to our company" << endl;
 cout << endl;
 cout << "Enter your name : " << endl;
 cin >> name_of_user;
 cout << "Enter your id : " << endl;
 cin >> id_of_user;
 cout << endl;
 while (test_information == 0) //while loop to check whether entered name and ID are correct or not and if
not user will re-enter data until the are correct
 {
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].ID == id_of_user && user[i].name == name_of_user)
 {
 test_information = 1;
 }
 }
 if (test_information == 0)
 {
 cout << "Invalid name or ID , please try again. " << endl;
 cout << endl;
 cout << "Enter your name : " << endl;
 cin >> name_of_user;
 cout << "Enter your id : " << endl;
 cin >> id_of_user;
 test_information = 0;
 }
 }
 cout << endl;
 cout << "These are our services : " << endl;
 cout << endl;
 cout << "1) Send a message. " << endl;
 cout << "2) Make a call. " << endl;
 cout << "3) Recharge balance. " << endl;
 cout << "4) Subscription. " << endl;
 cout << "5) Transfer balance. " << endl;
 cout << endl;
 cout << "Choose a number and enter it : " << endl;
 cin >> choice_number;
 while (true)
 {
 if (choice_number == 1)
 {
 float result1 = Message(id_of_user, Balance);
 if (result1 == 0.0)
 cout << "Your balance is not enough, Please recharge first." << endl;
 else
 cout << "your balance now is : " << result1 << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 while (test_character == 0)
 {
 if (choice_1 == 'n' || choice_1 == 'N')
 {
 test_character = 1;
break;
 }
 if (choice_1 == 'y' || choice_1 == 'Y')
 {
 cout << "Choose a number and enter it :" << endl;
 cin >> choice_number;
break;
 }
 else
 {
 cout << "Invalid entry" << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
test_character = 0;
 }
 }
 if (test_character == 1)
 {
 break;
 }
 }
 else if (choice_number == 2)
 {
 float result2 = Call(id_of_user, Balance);
 if (result2 == 7.0)
 cout << "Your balance is not enough, Please recharge first. " << endl;
 else
 cout << "your balance now is : " << result2 << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 while (test_character == 0)
 {
 if (choice_1 == 'n' || choice_1 == 'N')
 {
 test_character = 1;
 break;
 }
 if (choice_1 == 'y' || choice_1 == 'Y')
 {
 cout << "Choose a number and enter it :" << endl;
 cin >> choice_number;
break;
 }
 else
 cout << "Invalid entry" << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 test_character = 0;
 }
 if (test_character == 1)
 {
 break;
 }
 }
 else if (choice_number == 3)
 {
 float result3 = Recharge_Balance(id_of_user, Balance);
 if (result3 == 3.0)
 cout << "WRONG SERIAL NUMBER " << endl;
 else
 cout << "Your balance now is : " << result3 << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 while (test_character == 0)
 {
 if (choice_1 == 'n' || choice_1 == 'N')
 {
 test_character = 1;
break;
 }
 if (choice_1 == 'y' || choice_1 == 'Y')
 {
 cout << "Choose a number and enter it :" << endl;
 cin >> choice_number;
break;
 }
 else
 cout << "Invalid entry" << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 test_character = 0;
 }
 if (test_character == 1)
 {
 break;
 }
 }
 else if (choice_number == 4)
 {
 float result4 = Subscribtion(id_of_user, Balance);
 if (result4 == 1.0)
 {
 cout << " Please recharge your balance to renew subscription. " << endl;
 }
 else if (result4 == 5.0)
 {
 cout << endl;
 cout << "Wrong mobile number, Please enter a correct number. " << endl;
 }
 else
 cout << "Your balance now is : " << result4 << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 while (test_character == 0)
 {
 if (choice_1 == 'n' || choice_1 == 'N')
 {
 test_character = 1;
break;
 }
 if (choice_1 == 'y' || choice_1 == 'Y')
 {
 cout << "Choose a number and enter it :" << endl;
 cin >> choice_number;
break;
 }
 else
 cout << "Invalid entry" << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 test_character = 0;
 }
 if (test_character == 1)
 {
 break;
 }
 }
 else if (choice_number == 5)
 {
 float result5 = Transfer_Balance(id_of_user, Balance);
 if (result5 == 2.0)
 cout << " You don't have enough balance" << endl;
 else
 cout << "your balance now is : " << result5 << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 while (test_character == 0)
 {
 if (choice_1 == 'n' || choice_1 == 'N')
 {
 test_character = 1;
break;
 }
 if (choice_1 == 'y' || choice_1 == 'Y')
 {
 cout << "Choose a number and enter it :" << endl;
 cin >> choice_number;
break;
 }
 else
 cout << "Invalid entry" << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 test_character = 0;
 }
 if (test_character == 1)
 {
 break;
 }
 }
 else if (choice_number < 1 || choice_number > 5)
 {
 cout << "Invalid entry, please choose [1/2/3/4/5]" << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 while (test_character == 0)
 {
 if (choice_1 == 'n' || choice_1 == 'N')
 {
 test_character = 1;
break;
 }
 if (choice_1 == 'y' || choice_1 == 'Y')
 {
 cout << "Choose a number and enter it :" << endl;
 cin >> choice_number;
break;
 }
 else
 cout << "Invalid entry" << endl;
 cout << "-----------------------------------------------------" << endl;
 cout << "Do you want to choose another service ? (y/n) " << endl;
 cin >> choice_1;
 test_character = 0;
 }
 if (test_character == 1)
 {
 break;
 }
 }
 }
 cout << endl;
 cout << "Thank you for visiting our site. " << endl;
 return 0;
}
float Message(int a, float bal[])
{
 string message_receiver, message;
 cout << "Enter name of message receiver : " << endl;
 cin >> message_receiver;
 cout << "Write your message : " << endl;
 cin >> message;
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].ID == a)
 {
 if (bal[i] < 0.25)
 return 0.0; // return 0.0 to tell user that he don't have enough balance to send message
 else
 bal[i] = bal[i] - 0.25;
 return bal[i];
 }
 }
}
float Call(int a, float bal[])
{
 string name_of_contact;
 cout << "Enter name of contact :" << endl;
 cin >> name_of_contact;
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].ID == a)
 {
 if (bal[i] < 0.25)
 return 7.0; // return 7.0 to tell user that he don't have enough balance to make a call
 else
 bal[i] = bal[i] - 0.25;
 return bal[i];
 }
 }
}
float Recharge_Balance(int a, float bal[])
{
 string serial_number;
 int recharge_balance;
 bool test_serial_number = 0;
 cout << "Enter serial number : " << endl;
 cin >> serial_number;
 for (int i = 0; i < Charge; i++)
 {
 if (code[i].number == serial_number)
 {
 recharge_balance = code[i].price;
 test_serial_number = 1;
 }
 }
 if (test_serial_number == 0)
 return 3.0; // return 3.0 if the user entered a wrong serial number
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].ID == a)
 {
 bal[i] = bal[i] + recharge_balance;
 return bal[i];
 }
 }
}
float Subscribtion(int a, float bal[])
{
 int choice_2, choice_3;
 string phone_number;
 bool test_phone_number=0;
 cout << "Enter your phone number" << endl;
 cin >> phone_number;
 while (test_phone_number == 0)
 {
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].line.mobile_number == phone_number)
 {
 test_phone_number=1;
 }
 }
 if (test_phone_number == 0)
 {
 return 5.0; // return 5.0 if the user entered a wrong phone number
 }
 }
 cout << " 1) Renew. " << endl;
 cout << " 2) Change. " << endl;
 cout << endl;
 cout << " Choose a number :" << endl;
 cin >> choice_2;
 if (choice_2 == 1)
 {
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].ID == a)
 {
 if (user[i].line.package_type == "140 GB")
 {
 if (bal[i] >= 120)
 {
 bal[i] = bal[i] - 120;
 return bal[i];
 }
 else
 cout << "Your balance is not enough, please recharge it." << endl;
 return bal[i];
 }
 else if (user[i].line.package_type == "250 GB")
 {
 if (bal[i] >= 210)
 {
 bal[i] = bal[i] - 210;
 return bal[i];
 }
 else
 cout << "Your balance is not enough, please recharge it." << endl;
 return bal[i];
 }
 else if (user[i].line.package_type == "600 GB")
 {
 if (bal[i] >= 500)
 {
 bal[i] = bal[i] - 500;
 return bal[i];
 }
 else
 cout << "Your balance is not enough, please recharge it." << endl;
 return bal[i];
 }
 }
 }
 }
 else if (choice_2 == 2)
 {
 cout << "--------------------------------------------" << endl;
 cout << " Our company's offers : " << endl;
 cout << endl;
 cout << " 1) SUPER : 140 GB , pay 120 EGP/month " << endl;
 cout << endl;
 cout << " 2) MEGA : 250 GB , pay 210 EGP/month " << endl;
 cout << endl;
 cout << " 3) ULTRA : 600 GB , pay 500 EGP/month " << endl;
 cout << endl;
 cout << "Choose a number : " << endl;
 cin >> choice_3;
 cout << endl;
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].ID == a)
 {
 if (choice_3 == 1)
 {
 user[i].line.package_type = "140 GB";
 cout << " Your package type now is " << user[i].line.package_type << endl;
 return 1.0; // return 1.0 after changing user's subscription to tell him that he should
recharge his balance to update it
 }
 else if (choice_3 == 2)
 {
 user[i].line.package_type = "250 GB";
 cout << " Your package type now is " << user[i].line.package_type << endl;
 return 1.0;
 }
 else if (choice_3 == 3)
 {
 user[i].line.package_type = "600 GB";
 cout << " Your package type now is " << user[i].line.package_type << endl;
 return 1.0;
 }
 }
 }
 }
}
float Transfer_Balance(int a, float bal[])
{
 string balance_receiver;
 float amount_of_balance;
 cout << "How much will you transfer ?" << endl;
 cin >> amount_of_balance;
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].ID == a)
 {
 if (bal[i] >= amount_of_balance)
 break;
 else
 return 2.0; // return 2.0 if the user doesn't have the amount of balance he entered to be
transfered
 }
 }
 cout << "Enter name of balance receiver ; " << endl;
 cin >> balance_receiver;
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].name == balance_receiver)
 {
 bal[i] = bal[i] + amount_of_balance;
 cout << "Balance is transfered successfully , " << balance_receiver << "'s balance now is : " << bal
[i] << endl;
 cout << endl;
 }
 }
 for (int i = 0; i < Number_of_Users; i++)
 {
 if (user[i].ID == a)
 {
 bal[i] = bal[i] - amount_of_balance;
 return bal[i];
 }
 }
}