#include <iostream>
using namespace std;

//function for creating bank account
void bankAccount(string firstName, string surName, string town, string nextofking, string mother, string father, int contactNumb, int votersPin, string newPassword)
{
  cout << "******YOU SUCCESSFULLY CREATED YOUR BANK ACCOUNT******\n";
    cout << "FULL NAME :" << firstName << " " << surName <<   endl;
      cout << "RESIDENCE : " << town << endl;
        cout << "NAME OF NEXT OF KING : " << nextofking << endl;
          cout << "NAME OF MOTHER : " << mother << endl;
            cout << "NAME OF FATHER : " << father << endl;
              cout << "VOTER'S PIN : " << votersPin << endl;
                cout << "CONTACT NUMBER : "
                  << "0" << contactNumb << endl;
                    cout << "NEW PASSWORD : " << newPassword << endl;
}

//function for creating susu account
void susuAccount(string firstName, string surName, string town, string nextofking, string mother, string father, int contactNumb, int votersPin, string newPassword)
{
                    cout << "******YOU SUCCESSFULLY CREATED YOUR SUSU ACCOUNT******\n";
                  cout << "FULL NAME :" << firstName << " " << surName << endl;
                cout << "RESIDENCE : " << town << endl;
              cout << "NAME OF NEXT OF KING : " << nextofking << endl;
            cout << "NAME OF MOTHER ; " << mother << endl;
          cout << "NAME OF FATHER ; " << father << endl;
        cout << "VOTER'S PIN : " << votersPin << endl;
      cout << "CONTACT NUMBER : "
    << "0" << contactNumb << endl;
  cout << "NEW PASSWORD :" << newPassword << endl;
}


//main function
int main()
{

  //declaration and definition of variables
  int defaultPassword = 12345, contactNumb, pin, errorCounter = 0, votersPin, option, firstOption, alphaBet;
  string firstName, surName, town, nextOfking, mother, father, email, newPassword;
  char choice;
  double depositAmount = 0.0, withdrawalAmount = 0.0, transferAmount=0.0, currentBalance = 0.0;

  cout << "-----------------------------------\n";
  cout << "|-- Welcome to Reggie's Int. Bank--|\n";
  cout << "-----------------------------------\n";

  cout << "ARE YOU A NEW CUSTOMER OR AN OLD CUTOMER?\n";
  cout << "1. NEW CUSTOMER\n";
  cout << "2. OLD CUSTOMER\n";
  cout << "Please make a valid choice\n";
  cin >> firstOption;

  //handling operations for a new customer
  if (firstOption == 1)
  {

    cout << "What would you like to do ?\n";
    cout << "1. Create a Bank Account\n";
    cout << "2. Create a SUSU  savings account\n";

    cout << "Please select an option!!\n";
    cin >> option;

    //conditional statement to display output and take input
    if (option == 1)
    {
      cout << "Please enter your first name: " << endl;
      cin >> firstName;
      cout << "Please enter your surnmae: " << endl;
        cin >> surName;
          //getline(cin,fullname);
          cout << "Please enter you come from: " << endl;
            cin >> town;
              cout << "Please enter your next of king (i.e one who will proceed you should you pass  out!): " << endl;
                  cin >> nextOfking;
                    cout << "Please enter your mother's name: " << endl;
                      cin >> mother;
                        cout << "Please enter your father's name: " << endl;
                          cin >> father;
                            cout << "Please enter your contact number: " << endl;
                              cin >> contactNumb;
                                cout << "Please enter your voter card number or pin: " << endl;
                              cin >> votersPin;
                            cout << "YOU HAVE BEEN GIVEN *** 12345 *** AS YOUR PASSWORD, SAVE IT SOMEWHERE SAFE!!" << endl;
                          cout << "Please enter the default password given you." << endl;
                        cout << "<-------------------------------------->" << endl;

                          //checking the validity of password using a do-while loop
                      do
                    {
                  cout << "PIN : " << endl;
                cin >> pin;

              if (pin != defaultPassword)
            errorCounter++;
          } while (errorCounter < 3 && pin != defaultPassword);

    if (errorCounter < 3)
      cout << "Secret pin to your account has been created successfully." << endl;
        else
          {
            cout << "Blocked ! ! !" << endl;
              }

                cout << "Would you like to create your own password ?" << endl;
                  cout << "Make a choice of your own" << endl;
                    cout << " ( y / n ) :" << endl;
                      cin >> choice;

                    switch (choice)
                  {
                case 'y':
              cout << " Enter your new password" << endl;
            cin >> newPassword;
          break;
        case 'n':
      cout << "Your password remains as the default password" << endl;
    newPassword = defaultPassword;
    break;
  default:
cout << "LOADING DETAILS....................................................." << endl;
    }

    cout << "LOADING DETAILS....................................................." << endl;

    //calling or invoking the bank account funtion
    bankAccount(firstName,surName, town, nextOfking, mother, father, contactNumb, votersPin, newPassword);
  }

  else
  {
    cout << "Please enter your first name: " << endl;
      cin >> firstName;
        cout << "Please enter your surname: " << endl;
          cin >> surName;
            cout << "Please enter you come from: " << endl;
              cin >> town;
                cout << "Please enter your next of king (i.e one who will proceed you should you pass out!): " << endl;
                  cin >> nextOfking;
                    cout << "Please enter your mother's name: " << endl;
                      cin >> mother;
                        cout << "Please enter your father's name: " << endl;
                      cin >> father;
                    cout << "Please enter your contact number: " << endl;
                  cin >> contactNumb;
                cout << "Please enter your voter card number or pin: " << endl;
              cin >> votersPin;
            cout << "YOU HAVE BEEN GIVEN *** 12345 *** AS YOUR PASSWORD, SAVE IT SOMEWHERE SAFE!! " << endl;
          cout << "Please enter the default password given you." << endl;
        cout << "<-------------------------------------->" << endl;
      do
  {
    cout << "PIN : " << endl;
      cin >> pin;

        if (pin != defaultPassword)
          errorCounter++;
    } while (errorCounter < 3 && pin != defaultPassword);

    if (errorCounter < 3)
      cout << "Secret pin to your account has been created successfully." << endl;
    else
    {
      cout << "Blocked ! ! !" << endl;
    }

    cout << "Would you like to create your own password ?" << endl;
      cout << "Make a choice of your own" << endl;
        cout << " ( y / n ) :" << endl;
          cin >> choice;

    switch (choice)
      {
        case 'y':
          cout << " Enter your new password" << endl;
            cin >> newPassword;
              break;
                case 'n':
                  cout << "Your password remains as the default password" << endl;
                newPassword = defaultPassword;
              break;
          default:
      cout << "LOADING DETAILS....................................................." << endl;
    }

    cout << "LOADING DETAILS....................................................." << endl;

    //calling or invoking the susu account funtion
    susuAccount(firstName,surName, town, nextOfking, mother, father, contactNumb, votersPin, newPassword);
  }
}

//REGISTERED OR OLD CUSTOMER DEALINGS
else{
  cout << "Please enter your email\n";
  cin >> email;
  cout << "Please enter your password\n";
  cin >> newPassword;
  system("cls");
  cout << "............................. "<<endl;
  cout << "Welcome User : " << email <<"......" << endl;
  cout << "............................. " << endl;
  cout << endl;

}
cout << "**********MENU**********" << endl;
cout << "What would you like to do today?\n";
cout << "1. MAKE A DEPOSIT\n";
cout << "2. CHECK CURRENT BALANCE\n";
cout << "3. MAKE A WITHDRAWAL\n";
cout << "4. TRANSFER MONEY\n";

cout << "*************************" << endl;
cout << "Please make a choice : ";
cin >> alphaBet;

//handling operations for an old customer
if (alphaBet == 1)
{
  cout << "How much do you want to depostit ?\n";
  cout << "Enter amount (not less than GH20.00) :";
  cin >> depositAmount;
  if (depositAmount < 20)
  {
    cout << "Deposit amount less than GH20.00 ! !";
  }
  else
  {
    currentBalance += depositAmount;
    cout << "Hello user " << email << "you've made a deposit of " << depositAmount << ".00 and your current balance is " << currentBalance << ".00";
  }
}

else if (alphaBet == 2)
{
  cout << "Please make a deposit to see your available: " ;
  cin >> depositAmount;
  currentBalance = depositAmount;

  cout << "This is your available balance : " << currentBalance << ".00" << endl;
}

else if (alphaBet == 3)
{
  cout << "to withdraw money, please make a deposit\n";
  cout << "MAKE DEPOSIT : ";
  cin >> depositAmount;
  currentBalance = depositAmount;

  cout << "Enter amount to withdraw : ";
  cin >> withdrawalAmount;
  currentBalance -= withdrawalAmount;
  if(withdrawalAmount < currentBalance){
    cout << "not enough balance !!\n";
  }
  else{
    cout << "You have made a withdrawal of " << withdrawalAmount << ".00 and your current balance is " << currentBalance << ".00" << endl;
  }

}

else{
    cout<<"Please make a DEPOSIT and continue with TRANSFER : ";
    cin >> depositAmount;
    currentBalance = depositAmount;
    cout << "Enter TRANSFER AMOUNT: ";
    cin >> transferAmount;
    currentBalance = depositAmount - transferAmount;

    if(transferAmount > currentBalance){
    cout << "not enough balance !!\n";
  }
  else{
    cout << "You have made a transfer of " << transferAmount << ".00 and your current balance is " << currentBalance << ".00" << endl;
  }

}


  system("pause>0");
}
