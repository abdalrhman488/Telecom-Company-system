#include <iostream>
#include <string>

using namespace std;

///Global Variables
    int valID_check = 0;
    int ID_Read , PASS_Reaad ;
    ///variable to choose a process
    int Transactin_Number;
    ///variable to choose phone number to use
    unsigned long long Chosen_Phone;
    bool balance_Chack=false;
    ///Tariff of calls and msgs
    float Tariff=0.25;
    ///Recharging Cards
    int Card_10=10; ///10 L.E
    int Card_20=20; ///20 L.E
    int Card_50=50; ///50 L.E
    int Card_100=100; ///100 L.E
    int Card_No;
    ///Bundles
    int Cnct_X10=10;
    int Cnct_X20=20;
    int Cnct_X50=50;
    int Cnct_No;
    ///Variables For Balance Transfer
    unsigned long long Chosen_Transfer;
    int ProcEss;
    int Transfer_Amount;
///struct to store date
struct Date{
    int Day;
    int Month;
    int Year;
};
///Struct to store users Data
struct Users{
    char User_Name[50];
    int user_ID;
    char USer_Email[50];
    int User_Pass;
    char User_address[50];
    unsigned long long SetOflines[3];
    float BalanceOflines[3];
    string BundleType[3];
    Date Dte;
};
///Data of the users predefined in the system
    Users Usr1 ={"user1" , 1111 , "user1@e-mail" , 1010 , "address of user1" , {1000000000 , 1200000000 , 1230000000} ,{50 , 20 , 100} , {"Ordinary","Ordinary","Ordinary"}};
    Users Usr2 ={"user2" , 2222 , "user2@e-mail" , 2020 , "address of user2" , {2000000000 , 2200000000 , -1} ,{0 , 50 , 0} , {"Ordinary","Ordinary"}};
    Users Usr3 ={"user3" , 3333 , "user3@e-mail" , 3030 , "address of user3" , {3000000000 , -1 , -1} ,{0 , 0 , 0} , "Ordinary"};

///Function for Making Calls
void Calls(){
    cout << "Enter Phone Number you want to Call From : \n";
    cin >> Chosen_Phone ;

    for(int i=0 ; i<3 ; i++){
        if(ID_Read==Usr1.user_ID){
            if(Chosen_Phone==Usr1.SetOflines[i]){
                if(Tariff <= Usr1.BalanceOflines[i]){
                    Usr1.BalanceOflines[i] -= Tariff;
                    cout << "You Have Made A Call Successfully, Your Balance Have Been Reduced By 0.25 Pt. \n" ;
                    cout << "Your Current Balance Is " <<Usr1.BalanceOflines[i] << " L.E \n";
                }
                else{
                    cout << "You Don't Have Enough Balance, Please Recharge and Try Again! \n";
                }
            }
        }
        else if(ID_Read==Usr2.user_ID){
            if(Chosen_Phone==Usr2.SetOflines[i]){
                if(Tariff <= Usr2.BalanceOflines[i]){
                    Usr2.BalanceOflines[i] -= Tariff;
                    cout << "You Have Made A Call Successfully, Your Balance Have Been Reduced By 0.25 Pt. \n" ;
                    cout << "Your Current Balance Is " <<Usr2.BalanceOflines[i] << " L.E \n";
                }
                else{
                    cout << "You Don't Have Enough Balance, Please Recharge and Try Again! \n";
                }
            }
        }
        else if(ID_Read==Usr2.user_ID){
            if(Chosen_Phone==Usr2.SetOflines[i]){
                if(Tariff <= Usr2.BalanceOflines[i]){
                    Usr2.BalanceOflines[i] -= Tariff;
                    cout << "You Have Made A Call Successfully, Your Balance Have Been Reduced By 0.25 Pt. \n" ;
                    cout << "Your Current Balance Is " <<Usr2.BalanceOflines[i] << " L.E \n";
                }
                else{
                    cout << "You Don't Have Enough Balance, Please Recharge and Try Again! \n";
                }
            }
        }
    }

}

///Function For Sending a Message
void SMS_msg(){
    cout << "Enter Phone Number You Want to Send A MESSAGE From : \n";
    cin >> Chosen_Phone ;

    for(int i=0 ; i<3 ; i++){
        if(ID_Read==Usr1.user_ID){
            if(Chosen_Phone==Usr1.SetOflines[i]){
                if(Tariff <= Usr1.BalanceOflines[i]){
                    Usr1.BalanceOflines[i] -= Tariff;
                    cout << "You Have Sent A MESSAGE Successfully, Your Balance Have Been Reduced By 0.25 Pt. \n" ;
                    cout << "Your Current Balance Is " <<Usr1.BalanceOflines[i] << " L.E \n";
                }
                else{
                    cout << "You Don't Have Enough Balance, Please Recharge and Try Again! \n";
                }
            }
        }
        else if(ID_Read==Usr2.user_ID){
            if(Chosen_Phone==Usr2.SetOflines[i]){
                if(Tariff <= Usr2.BalanceOflines[i]){
                    Usr2.BalanceOflines[i] -= Tariff;
                    cout << "You Have Sent A MESSAGE Successfully, Your Balance Have Been Reduced By 0.25 Pt. \n" ;
                    cout << "Your Current Balance Is " <<Usr2.BalanceOflines[i] << " L.E \n";
                }
                else{
                    cout << "You Don't Have Enough Balance, Please Recharge and Try Again! \n";
                }
            }
        }
        else if(ID_Read==Usr2.user_ID){
            if(Chosen_Phone==Usr2.SetOflines[i]){
                if(Tariff <= Usr2.BalanceOflines[i]){
                    Usr2.BalanceOflines[i] -= Tariff;
                    cout << "You Have Sent A MESSAGE Successfully, Your Balance Have Been Reduced By 0.25 Pt. \n" ;
                    cout << "Your Current Balance Is " <<Usr2.BalanceOflines[i] << " L.E \n";
                }
                else{
                    cout << "You Don't Have Enough Balance, Please Recharge and Try Again! \n";
                }
            }
        }
    }

}

///Function For Recharging Balance
void Recharge(){
    cout << "Enter Phone Number You Want To Recharge... \n";
    cin >> Chosen_Phone ;
    cout << "Enter Card Number To Recharge... \n";
    cin >> Card_No;
    for (int i=0 ; i<3 ; i++){
        if(ID_Read==Usr1.user_ID){
            if(Chosen_Phone==Usr1.SetOflines[i]){
                if(Card_No==1000 || Card_No==1100 || Card_No==1010){
                    Usr1.BalanceOflines[i]+=Card_10;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr1.BalanceOflines[i] << " L.E \n";
                }
                else if(Card_No==2000 || Card_No==2200 || Card_No==2020){
                    Usr1.BalanceOflines[i]+=Card_20;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr1.BalanceOflines[i] << " L.E \n";
                }
                else if(Card_No==5000 || Card_No==5500 || Card_No==5050){
                    Usr1.BalanceOflines[i]+=Card_50;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr1.BalanceOflines[i] << " L.E \n";
                }
                else if(Card_No==5678 || Card_No==5768 || Card_No==7766){
                    Usr1.BalanceOflines[i]+=Card_100;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr1.BalanceOflines[i] << " L.E \n";
                }
                else{
                    cout << "You Entered Invalid Card Number...! \n";
                }

            }
        }
        else if(ID_Read==Usr2.user_ID){
            if(Chosen_Phone==Usr2.SetOflines[i]){
                if(Card_No==1000 || Card_No==1100 || Card_No==1010){
                    Usr2.BalanceOflines[i]+=Card_10;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr2.BalanceOflines[i] << " L.E \n";
                }
                else if(Card_No==2000 || Card_No==2200 || Card_No==2020){
                    Usr2.BalanceOflines[i]+=Card_20;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr2.BalanceOflines[i] << " L.E \n";
                }
                else if(Card_No==5000 || Card_No==5500 || Card_No==5050){
                    Usr2.BalanceOflines[i]+=Card_50;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr2.BalanceOflines[i] << " L.E \n";
                }
                else if(Card_No==5678 || Card_No==5768 || Card_No==7766){
                    Usr2.BalanceOflines[i]+=Card_100;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr2.BalanceOflines[i] << " L.E \n";
                }
                else{
                    cout << "You Entered Invalid Card Number...! \n";
                }

            }
        }
        else if(ID_Read==Usr3.user_ID){
            if(Chosen_Phone==Usr3.SetOflines[i]){
                if(Card_No==1000 || Card_No==1100 || Card_No==1010){
                    Usr3.BalanceOflines[i]+=Card_10;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr3.BalanceOflines[i] << " L.E \n";
                }
                else if(Card_No==2000 || Card_No==2200 || Card_No==2020){
                    Usr3.BalanceOflines[i]+=Card_20;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr3.BalanceOflines[i] << " L.E \n";
                }
                else if(Card_No==5000 || Card_No==5500 || Card_No==5050){
                    Usr3.BalanceOflines[i]+=Card_50;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr3.BalanceOflines[i] << " L.E \n";
                }
                else if(Card_No==5678 || Card_No==5768 || Card_No==7766){
                    Usr3.BalanceOflines[i]+=Card_100;
                    cout << "You Have Recharged Your Line Successfully, Your New Balance is ";
                    cout << Usr3.BalanceOflines[i] << " L.E \n";
                }
                else{
                    cout << "You Entered Invalid Card Number...! \n";
                }

            }
        }
    }
}

///Function For Balance Transfer
void Transfer_Balance(){
    cout << "Enter Your Phone Number : \n";
    cin >> Chosen_Phone;
    cout << "1.Transfer To Another Number you own \n";
    cout << "2.Transfer To Another Number \n";
    cin >> ProcEss;
    if(ProcEss==1){
        cout << "Please Enter The Transfer Amount : \n";
        cin >> Transfer_Amount;
        cout << "Please Enter Phone Number That You want To Transfer Balance to : \n";
        cin >> Chosen_Transfer;
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr1.user_ID){
                if(Chosen_Phone==Usr1.SetOflines[i]){
                    if(Transfer_Amount<=Usr1.BalanceOflines[i]){
                        Usr1.BalanceOflines[i]-=Transfer_Amount;
                        cout << "Your Have Transfered Balance Successfully, Your Current Balance is " << Usr1.BalanceOflines[i] << " L.E \n";
                    }
                    else{
                        cout << "You Don't Have Enough Balance, Please Recharge And Try Again..! \n";
                    }
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr1.user_ID){
                if(Chosen_Transfer==Usr1.SetOflines[i]){
                    Usr1.BalanceOflines[i]+=Transfer_Amount;
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr2.user_ID){
                if(Chosen_Phone==Usr2.SetOflines[i]){
                    if(Transfer_Amount<=Usr2.BalanceOflines[i]){
                        Usr2.BalanceOflines[i]-=Transfer_Amount;
                        cout << "Your Have Transfered Balance Successfully, Your Current Balance is " << Usr2.BalanceOflines[i] << " L.E \n";
                    }
                    else{
                        cout << "You Don't Have Enough Balance, Please Recharge And Try Again..! \n";
                    }
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr2.user_ID){
                if(Chosen_Transfer==Usr2.SetOflines[i]){
                    Usr2.BalanceOflines[i]+=Transfer_Amount;
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr3.user_ID){
                if(Chosen_Phone==Usr3.SetOflines[i]){
                    if(Transfer_Amount<=Usr3.BalanceOflines[i]){
                        Usr3.BalanceOflines[i]-=Transfer_Amount;
                        cout << "Your Have Transfered Balance Successfully, Your Current Balance is " << Usr3.BalanceOflines[i] << " L.E \n";
                    }
                    else{
                        cout << "You Don't Have Enough Balance, Please Recharge And Try Again..! \n";
                    }
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr3.user_ID){
                if(Chosen_Transfer==Usr3.SetOflines[i]){
                    Usr3.BalanceOflines[i]+=Transfer_Amount;
                }
            }
        }
    }
    else if(ProcEss==2){
        cout << "Please Enter The Transfer Amount : \n";
        cin >> Transfer_Amount;
        cout << "Please Enter Phone Number That You want To Transfer Balance to : \n";
        cin >> Chosen_Transfer;
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr1.user_ID){
                if(Chosen_Phone==Usr1.SetOflines[i]){
                    if(Transfer_Amount<=Usr1.BalanceOflines[i]){
                        Usr1.BalanceOflines[i]-=Transfer_Amount;
                        cout << "Your Have Transfered Balance Successfully, Your Current Balance is " << Usr1.BalanceOflines[i] << " L.E \n";
                    }
                    else{
                        cout << "You Don't Have Enough Balance, Please Recharge And Try Again..! \n";
                    }
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr2.user_ID){
                if(Chosen_Transfer==Usr2.SetOflines[i]){
                    Usr2.BalanceOflines[i]+=Transfer_Amount;
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr3.user_ID){
                if(Chosen_Transfer==Usr3.SetOflines[i]){
                    Usr3.BalanceOflines[i]+=Transfer_Amount;
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr2.user_ID){
                if(Chosen_Phone==Usr2.SetOflines[i]){
                    if(Transfer_Amount<=Usr2.BalanceOflines[i]){
                        Usr2.BalanceOflines[i]-=Transfer_Amount;
                        cout << "Your Have Transfered Balance Successfully, Your Current Balance is " << Usr2.BalanceOflines[i] << " L.E \n";
                    }
                    else{
                        cout << "You Don't Have Enough Balance, Please Recharge And Try Again..! \n";
                    }
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr1.user_ID){
                if(Chosen_Transfer==Usr1.SetOflines[i]){
                    Usr1.BalanceOflines[i]+=Transfer_Amount;
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr3.user_ID){
                if(Chosen_Transfer==Usr3.SetOflines[i]){
                    Usr3.BalanceOflines[i]+=Transfer_Amount;
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr3.user_ID){
                if(Chosen_Phone==Usr3.SetOflines[i]){
                    if(Transfer_Amount<=Usr3.BalanceOflines[i]){
                        Usr3.BalanceOflines[i]-=Transfer_Amount;
                        cout << "Your Have Transfered Balance Successfully, Your Current Balance is " << Usr3.BalanceOflines[i] << " L.E \n";
                    }
                    else{
                        cout << "You Don't Have Enough Balance, Please Recharge And Try Again..! \n";
                    }
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr2.user_ID){
                if(Chosen_Transfer==Usr2.SetOflines[i]){
                    Usr2.BalanceOflines[i]+=Transfer_Amount;
                }
            }
        }
        for(int i=0 ; i<3 ; i++){
            if(ID_Read==Usr1.user_ID){
                if(Chosen_Transfer==Usr1.SetOflines[i]){
                    Usr1.BalanceOflines[i]+=Transfer_Amount;
                }
            }
        }
    }
}

///Function For Bundles
void Bundles(){
    cout << "Enter Phone Number You Want To Make A Subscribtion From... \n";
    cin >> Chosen_Phone;
    cout << "Choose A Bundle : \n";
    cout << "1.Connect X10 (Requires 10 L.E of Balance) \n";
    cout << "2.Connect X20 (Requires 20 L.E of Balance) \n";
    cout << "3.Connect X50 (Requires 50 L.E of Balance) \n";
    cin >> Cnct_No;
    for(int i=0 ; i<3 ; i++){
        if(ID_Read==Usr1.user_ID){
            if(Chosen_Phone==Usr1.SetOflines[i]){
                if(Cnct_No==1 && Cnct_X10<=Usr1.BalanceOflines[i]){
                    Usr1.BalanceOflines[i]-=Cnct_X10;
                    Usr1.BundleType[i]="Connect X10";
                    cout << "Enter Today's Date : " ;
                    cin >> Usr1.Dte.Day >> Usr1.Dte.Month >> Usr1.Dte.Year ;
                    cout << "You Successfully Subscribed To Connect X10 Bundle \n";
                    cout << "Bundle Will Expire on : " << Usr1.Dte.Day << " / " << Usr1.Dte.Month+1 << " / " << Usr1.Dte.Year << " \n";
                }
                else if(Cnct_No==2 && Cnct_X20<=Usr1.BalanceOflines[i]){
                    Usr1.BalanceOflines[i]-=Cnct_X20;
                    Usr1.BundleType[i]="Connect X20";
                    cout << "Enter Today's Date : " ;
                    cin >> Usr1.Dte.Day >> Usr1.Dte.Month >> Usr1.Dte.Year ;
                    cout << "You Successfully Subscribed To Connect X20 Bundle \n";
                    cout << "Bundle Will Expire on : " << Usr1.Dte.Day << " / " << Usr1.Dte.Month+1 << " / " << Usr1.Dte.Year << " \n";
                }
                else if(Cnct_No==3 && Cnct_X50<=Usr1.BalanceOflines[i]){
                    Usr1.BalanceOflines[i]-=Cnct_X50;
                    Usr1.BundleType[i]="Connect X50";
                    cout << "Enter Today's Date : " ;
                    cin >> Usr1.Dte.Day >> Usr1.Dte.Month >> Usr1.Dte.Year ;
                    cout << "You Successfully Subscribed To Connect X50 Bundle \n";
                    cout << "Bundle Will Expire on : " << Usr1.Dte.Day << " / " << Usr1.Dte.Month+1 << " / " << Usr1.Dte.Year << "\n";
                }
                else {
                    cout << "Your Balance Isn't Enough, Please Recharge And Try Again \n";
                }
            }
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(ID_Read==Usr2.user_ID){
            if(Chosen_Phone==Usr2.SetOflines[i]){
                if(Cnct_No==1 && Cnct_X10<=Usr2.BalanceOflines[i]){
                    Usr2.BalanceOflines[i]-=Cnct_X10;
                    Usr2.BundleType[i]="Connect X10";
                    cout << "Enter Today's Date : " ;
                    cin >> Usr2.Dte.Day >> Usr2.Dte.Month >> Usr2.Dte.Year ;
                    cout << "You Successfully Subscribed To Connect X10 Bundle \n";
                    cout << "Bundle Will Expire on : " << Usr2.Dte.Day << " / " << Usr2.Dte.Month+1 << " / " << Usr2.Dte.Year << "\n";
                }
                else if(Cnct_No==2 && Cnct_X20<=Usr2.BalanceOflines[i]){
                    Usr2.BalanceOflines[i]-=Cnct_X20;
                    Usr2.BundleType[i]="Connect X20";
                    cout << "Enter Today's Date : " ;
                    cin >> Usr2.Dte.Day >> Usr2.Dte.Month >> Usr2.Dte.Year ;
                    cout << "You Successfully Subscribed To Connect X20 Bundle \n";
                    cout << "Bundle Will Expire on : " << Usr2.Dte.Day << " / " << Usr2.Dte.Month+1 << " / " << Usr2.Dte.Year << "\n";
                }
                else if(Cnct_No==3 && Cnct_X50<=Usr2.BalanceOflines[i]){
                    Usr2.BalanceOflines[i]-=Cnct_X50;
                    Usr2.BundleType[i]="Connect X50";
                    cout << "Enter Today's Date : " ;
                    cin >> Usr2.Dte.Day >> Usr2.Dte.Month >> Usr2.Dte.Year ;
                    cout << "You Successfully Subscribed To Connect X50 Bundle \n";
                    cout << "Bundle Will Expire on : " << Usr2.Dte.Day << " / " << Usr2.Dte.Month+1 << " / " << Usr2.Dte.Year << "\n";
                }
                else {
                    cout << "Your Balance Isn't Enough, Please Recharge And Try Again \n";
                }
            }
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(ID_Read==Usr3.user_ID){
            if(Chosen_Phone==Usr3.SetOflines[i]){
                if(Cnct_No==1 && Cnct_X10<=Usr3.BalanceOflines[i]){
                    Usr3.BalanceOflines[i]-=Cnct_X10;
                    Usr3.BundleType[i]="Connect X10";
                    cout << "Enter Today's Date : " ;
                    cin >> Usr3.Dte.Day >> Usr3.Dte.Month >> Usr3.Dte.Year ;
                    cout << "You Successfully Subscribed To Connect X10 Bundle \n";
                    cout << "Bundle Will Expire on : " << Usr3.Dte.Day << " / " << Usr3.Dte.Month+1 << " / " << Usr3.Dte.Year << "\n";
                }
                else if(Cnct_No==2 && Cnct_X20<=Usr3.BalanceOflines[i]){
                    Usr3.BalanceOflines[i]-=Cnct_X20;
                    Usr3.BundleType[i]="Connect X20";
                    cout << "Enter Today's Date : " ;
                    cin >> Usr3.Dte.Day >> Usr3.Dte.Month >> Usr3.Dte.Year ;
                    cout << "You Successfully Subscribed To Connect X20 Bundle \n";
                    cout << "Bundle Will Expire on : " << Usr3.Dte.Day << " / " << Usr3.Dte.Month+1 << " / " << Usr3.Dte.Year << "\n";
                }
                else if(Cnct_No==3 && Cnct_X50<=Usr3.BalanceOflines[i]){
                    Usr3.BalanceOflines[i]-=Cnct_X50;
                    Usr3.BundleType[i]="Connect X50";
                    cout << "Enter Today's Date : " ;
                    cin >> Usr3.Dte.Day >> Usr3.Dte.Month >> Usr3.Dte.Year ;
                    cout << "You Successfully Subscribed To Connect X50 Bundle \n";
                    cout << "Bundle Will Expire on : " << Usr3.Dte.Day << " / " << Usr3.Dte.Month+1 << " / " << Usr3.Dte.Year << "\n";
                }
                else {
                    cout << "Your Balance Isn't Enough, Please Recharge And Try Again \n";
                }
            }
        }
    }
}

///Function For Balance Inquiry
void Balance_Inquiry(){
    cout << "Enter Required Phone Number : \n";
    cin >> Chosen_Phone;
    for(int i=0 ; i<3 ; i++){
        if(ID_Read==Usr1.user_ID){
            if(Chosen_Phone==Usr1.SetOflines[i]){
                cout << "Your Current Balance is : " << Usr1.BalanceOflines[i] << " L.E \n" ;
            }
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(ID_Read==Usr2.user_ID){
            if(Chosen_Phone==Usr2.SetOflines[i]){
                cout << "Your Current Balance is : " << Usr2.BalanceOflines[i] << " L.E \n" ;
            }
        }
    }
    for(int i=0 ; i<3 ; i++){
        if(ID_Read==Usr3.user_ID){
            if(Chosen_Phone==Usr3.SetOflines[i]){
                cout << "Your Current Balance is : " << Usr3.BalanceOflines[i] << " L.E \n" ;
            }
        }
    }
}

///Function For User Information Inquiry
void Stored_Information(){
    if(ID_Read==Usr1.user_ID){
        cout << Usr1.User_Name << " Personal Information : \n";
        cout << Usr1.User_Name << " ID : " << Usr1.user_ID << " \n";
        cout << Usr1.User_Name << " E-mail : " << Usr1.USer_Email << " \n";
        cout << Usr1.User_Name << " Address : " << Usr1.User_address << "\n";
        for(int i=0 ; i<3 ; i++){
            if(Usr1.SetOflines[i] != -1){
                cout << Usr1.User_Name << " Line " << i+1 << " Is : " <<Usr1.SetOflines[i] <<"\n";
                cout << "Balance of Line = " << Usr1.BalanceOflines[i] << " L.E \n";
                cout << "Bundle Type of Line Is " << Usr1.BundleType[i] << "\n";
            }
        }
    }
    else if(ID_Read==Usr2.user_ID){
        cout << Usr2.User_Name << " Personal Information : \n";
        cout << Usr2.User_Name << " ID : " << Usr2.user_ID << " \n";
        cout << Usr2.User_Name << " E-mail : " << Usr2.USer_Email << " \n";
        cout << Usr2.User_Name << " Address : " << Usr2.User_address << "\n";
        for(int i=0 ; i<3 ; i++){
            if(Usr2.SetOflines[i] != -1){
                cout << Usr2.User_Name << " Line " << i+1 << " Is : " <<Usr2.SetOflines[i] <<"\n";
                cout << "Balance of Line = " << Usr2.BalanceOflines[i] << " L.E \n";
                cout << "Bundle Type of Line Is " << Usr2.BundleType[i] << "\n";
            }
        }
    }
    else if(ID_Read==Usr3.user_ID){
        cout << Usr3.User_Name << " Personal Information : \n";
        cout << Usr3.User_Name << " ID : " << Usr3.user_ID << " \n";
        cout << Usr3.User_Name << " E-mail : " << Usr3.USer_Email << " \n";
        cout << Usr3.User_Name << " Address : " << Usr3.User_address << "\n";
        for(int i=0 ; i<3 ; i++){
            if(Usr3.SetOflines[i] != -1){
                cout << Usr3.User_Name << " Line " << i+1 << " Is : " <<Usr3.SetOflines[i] <<"\n";
                cout << "Balance of Line = " << Usr3.BalanceOflines[i] << " L.E \n";
                cout << "Bundle Type of Line Is " << Usr3.BundleType[i] << "\n";
            }
        }
    }
}

///Main menu of the system for user to choose a process
void main_Menu(){
    ///list of system functionalities
    cout << "CHOOSE YOUR PROCESS : \n";
    cout << "1-Make a Call \n";
    cout << "2-Send a Message \n";
    cout << "3-Recharge Your Balance \n";
    cout << "4-Bundle Subscribtion \n";
    cout << "5-Balance Transfer \n";
    cout << "6-Balance Inquiry \n";
    cout << "7-User Information Inquiry \n";
    ///getting the chosen process from the user
    cout << "Please Enter the Number of required Process : \n";
    cin >> Transactin_Number;

}

///Function to check that user entered a valid ID & password
void USerValidation(){

    ///Reading ID from user
    cout << "PLEASE ENTER YOUR ID : " ;
    cin >> ID_Read ;
    cout << "\n" ;
    ///Reading password from user
    cout << "PLEASE ENTER YOUR PASSWORD : " ;
    cin >> PASS_Reaad ;
    cout << "\n" ;

}


int main()
{   char Anthr_Transaction='y';
    ///System Loop
    while(Anthr_Transaction=='y'){
    ///Calling function to  check if user entered valid data
    USerValidation();

    ///Checking if user entered the right data
    while(valID_check==0){
        if(ID_Read==Usr1.user_ID && PASS_Reaad==Usr1.User_Pass){
            valID_check+=1;
            cout << "HELLO, User1.... \n";
            main_Menu();
        }
        else if(ID_Read==Usr2.user_ID && PASS_Reaad==Usr2.User_Pass){
            valID_check+=2;
            cout << "HELLO, User2.... \n";
            main_Menu();
        }
        else if(ID_Read==Usr3.user_ID && PASS_Reaad==Usr3.User_Pass){
            valID_check+=3;
            cout << "HELLO, User3.... \n";
            main_Menu();
        }
        else{
            cout << "YOU HAVE ENTERED INVALID DATA, PLEASE ENTER YOUR DATA AGAIN : \n" ;
            USerValidation() ;
        }
    }
    ///conditions to go to each process from menu page
    if(Transactin_Number==1){
        Calls();
        Transactin_Number=0;
    }
    else if(Transactin_Number==2){
        SMS_msg();
        Transactin_Number=0;
    }
    else if(Transactin_Number==3){
        Recharge();
        Transactin_Number=0;
    }

    else if(Transactin_Number==4){
        Bundles();
        Transactin_Number=0;
    }

    else if(Transactin_Number==5){
        Transfer_Balance();
        Transactin_Number=0;
    }
    else if(Transactin_Number==6){
        Balance_Inquiry();
        Transactin_Number=0;
    }
    else if(Transactin_Number==7){
        Stored_Information();
        Transactin_Number=0;
    }
    valID_check=0;
    cout << "Do You Want Another Transaction?? \n \n" << "         y/n \n";
    cin >> Anthr_Transaction;
    }
    return 0;
}

