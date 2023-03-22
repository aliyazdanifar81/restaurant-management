#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>
using namespace std;
void extendplus(string **cptr, int &len)
{
    string *f = *cptr;
    int newlen = len + 1;
    string *temp = new string[newlen];
    for (int i = 0; i < len; i++)
    {
        temp[i] = f[i];
    }
    delete[] f;
    f = temp;
    *cptr = f;
    len++;
}
void extending(string **cptr, int &len, int index)
{
    if (len == 1)
    {
        return;
    }
    string *f = *cptr;
    for (int i = index; i < (len - 1); i++)
    {
        f[i] = f[i + 1];
    }
    int newlen = len - 1;
    string *temp = new string[newlen];
    for (int i = 0; i < newlen; i++)
    {
        temp[i] = f[i];
    }
    delete[] f;
    f = temp;
    *cptr = f;
    len--;
}
struct customer
{
    string firstname[100];
    string lastname[100];
    string username[100];
    string password[100];
    string email[100];
    string emailpassword[100];
    string phonenumber[100];
    string favoritfood[100];
    string wallet[100];
};
struct Employee
{
    string firstname[100];
    string lastname[100];
    string username[100];
    string password[100];
    string email[100];
    string emailpassword[100];
    string phonenumber[100];
    string favoritfood[100];
};

struct manager
{
    string username[100];
    string password[100];
};
struct food
{
    string name[100];
    string price[100];
};
struct factor
{
    string foodname[100];
    string foodprice[100];
    int foodnumber[100];
    string totalprice = "0";
    int scounter = 0;
};
struct sabad
{
    string foodname[100];
    int foodnumber[100];
    string foodprice[100];
    int scounter = 0;
};
int main()
{
    int l = 1, os = 3, ol = 3;
    string namefood;
    // string **list = new string *[l];
    // for (int j = 0; j < l; j++)
    // {
    //     list[j] = new string[3];
    // }
    sabad sbd[100];
    factor fct[100];
    string *offercode = new string[3];
    customer cust;
    Employee emp;
    manager man;
    food fod;
    cust.firstname[0] = "Ramin", cust.lastname[0] = "ahamdian", cust.username[0] = "Ahmadia567", cust.password[0] = "20942XsvH@Z";
    cust.firstname[1] = "Milad", cust.lastname[1] = "farahani", cust.username[1] = "Farahan78887@f", cust.password[1] = "35664FTUn45";
    emp.firstname[0] = "Ahmad", emp.lastname[0] = "Mosavi", emp.username[0] = "ahmad@sol", emp.password[0] = "23Cf@vcvbm";
    emp.firstname[1] = "Siamak", emp.lastname[1] = "Ansari", emp.username[1] = "Sia34mak", emp.password[1] = "3432SM@12";
    emp.firstname[2] = "Ali", emp.lastname[2] = "jamshidi", emp.username[2] = "Alireza12CV", emp.password[2] = "2277020CVVG";
    fod.name[0] = "Ghormesabzi", fod.name[1] = "Zereshkpolo", fod.name[2] = "Ghime", fod.name[3] = "Noshabe", fod.name[4] = "Dogh", fod.name[5] = "Kabab", fod.name[6] = "Berenj", fod.name[7] = "Khoresht", fod.name[8] = "Delester", fod.name[9] = "Salad";
    fod.price[0] = "32000", fod.price[1] = "37000", fod.price[2] = "30000", fod.price[3] = "12000", fod.price[4] = "10000", fod.price[5] = "40000", fod.price[6] = "10000", fod.price[7] = "23000", fod.price[8] = "13000", fod.price[9] = "15000";
    man.username[0] = "amir@899", man.password[0] = "Q4##56bN";
    offercode[0] = "23FCV%n&5", offercode[1] = "sd67Hj#!x", offercode[2] = "QWBv23@#v";
    int flag = 1, flag2 = 1, nom, inom, randomm, a = 1, b = 2, c = 0, d = 9, ifactor = 0;
    for (int i = 0; i < 100; i++)
    {
        cust.wallet[i] = "0";
    }
    while (flag)
    {
        system("clear");
        cout << "welcom:" << '\n'
             << '\n'
             << "1 - login as a Customer" << '\n'
             << "2 - Register as a Customer" << '\n'
             << "3 - login as a Employee" << '\n'
             << "4 - login as a Manager" << '\n'
             << "5 - EXIT" << '\n'
             << '\n'
             << "insert number of menu: ";
        cin >> nom;
        cin.get();
        if (nom == 1)
        {
            string username, password, pasokh, email, empass, phone, favfood;
            int i = 0, icopy = 0, exist = 0, exist2 = 0, exist3 = 0, fpass = 1, ffood = 1, onusername = 1, onemail = 1, onphone = 1, menu = 1, sefcounter = 0, result;
            system("clear");
            while (onusername)
            {
                exist = 0, exist2 = 0, exist3 = 0, fpass = 1, ffood = 1, onusername = 1, onemail = 1, onphone = 1;
                cout << '\n'
                     << "insert your username: ";
                getline(cin, username);
                for (i = 0; i <= a; i++)
                {
                    if (username == cust.username[i])
                    {
                        exist = 1;
                        icopy = i;
                        i = a + 1;
                    }
                }
                cout << '\n'
                     << "insert your password: ";
                getline(cin, password);
                if ((password == cust.password[icopy]) && exist)
                {
                    onusername = 0;
                }
                else
                {
                    cout << '\n'
                         << "username or password is FALSE!" << '\n'
                         << '\n'
                         << "do you want try another way (y/n)? ";
                    getline(cin, pasokh);
                    if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                    {
                        while (onemail)
                        {
                            cout << '\n'
                                 << "insert your Email: ";
                            getline(cin, email);
                            // int j = 0, jcopy;
                            for (i = 0; i <= a; i++)
                            {
                                if (email == cust.email[i])
                                {
                                    exist2 = 1;
                                    icopy = i;
                                    i = a + 1;
                                }
                            }
                            cout << '\n'
                                 << "insert your Emailpassword: ";
                            getline(cin, empass);
                            if ((empass == cust.emailpassword[icopy]) && exist2)
                            {
                                onusername = 0;
                                onemail = 0;
                            }
                            else
                            {
                                cout << '\n'
                                     << "Email or Emailpassword is FALSE!" << '\n'
                                     << '\n'
                                     << "do you want go back (y/n)?";
                                getline(cin, pasokh);
                                if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                {
                                    onemail = 0;
                                }
                                else
                                {
                                    cout << '\n'
                                         << "do you want try another way (y/n)? ";
                                    getline(cin, pasokh);
                                    if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                    {
                                        while (onphone)
                                        {
                                            cout << '\n'
                                                 << "insert your phonenumber: ";
                                            getline(cin, phone);
                                            // int k = 0, kcopy;
                                            for (i = 0; i <= a; i++)
                                            {
                                                if (phone == cust.phonenumber[i])
                                                {
                                                    exist3 = 1;
                                                    icopy = i;
                                                    i = a + 1;
                                                }
                                            }
                                            cout << '\n'
                                                 << "pleas insert your favorit food: ";
                                            getline(cin, favfood);
                                            if ((favfood == cust.favoritfood[icopy]) && exist3)
                                            {
                                                onphone = 0;
                                                onemail = 0;
                                                onusername = 0;
                                            }
                                            else
                                            {
                                                cout << '\n'
                                                     << "phonenumber or favoritfod is FALSE!" << '\n'
                                                     << '\n'
                                                     << "do you want go back (y/n)?";
                                                getline(cin, pasokh);
                                                if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                                {
                                                    onphone = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            while (menu)
            {
                ifactor = fct[icopy].scounter;
                int onlist = 1;
                system("clear");
                cout << '\n'
                     << "1 - View the list of foods along with their prices" << '\n'
                     << "2 - add or delete food from list" << '\n'
                     << "3 - Final registration of purchase and payment" << '\n'
                     << "4 - change information" << '\n'
                     << "5 - charging wallet" << '\n'
                     << "6 - View invoices for your previous purchases" << '\n'
                     << "7 - EXIT"
                     << '\n'
                     << '\n'
                     << "insert number of menu: ";
                cin >> inom;
                if (inom == 1)
                {
                    system("clear");
                    for (int i = 0; i <= d; i++)
                    {
                        cout << fod.name[i] << "----------------" << fod.price[i] << '\n'
                             << '\n';
                    }
                    cin.get();
                    cout << "press ENTER for go back";
                    cin.get();
                }
                else if (inom == 2)
                {
                    int p;
                    string fn;
                    system("clear");
                    cout << "1 - Add to list" << '\n'
                         << "2 - Delete from list" << '\n'
                         << '\n'
                         << "Enter the desired option number: ";
                    cin >> p;
                    if (p == 1)
                    {
                        system("clear");
                        cin.get();
                        sefcounter = sbd[icopy].scounter;
                        while (onlist)
                        {
                            cout << '\n'
                                 << "Enter the name of the food you want (insert 0 for get back): ";
                            int j = 0, jcopy, existfood = 0, foodnumber = 0;
                            getline(cin, namefood);
                            if (namefood == "0")
                            {
                                onlist = 0;
                            }
                            else
                            {
                                for (j = 0; j <= d; j++)
                                {
                                    if (namefood == fod.name[j])
                                    {
                                        cout << '\n'
                                             << "Enter the desired number of food: ";
                                        cin >> foodnumber;
                                        cin.get();
                                        jcopy = j;
                                        existfood = 1;
                                        sbd[icopy].foodname[sefcounter] = namefood;
                                        sbd[icopy].foodnumber[sefcounter] = foodnumber;
                                        sbd[icopy].foodprice[sefcounter] = fod.price[jcopy];
                                        // list[l - 1][0] = namefood;
                                        // list[l - 1][1] = to_string(foodnumber);
                                        // list[l - 1][2] = fod.price[jcopy];
                                        // list[l - 1][3] = icopy;
                                        j = d + 1;
                                    }
                                }
                                if (existfood == 1)
                                {
                                    cout << '\n'
                                         << "the final price of " << sbd[icopy].foodnumber[sefcounter] << ' ' << sbd[icopy].foodname[sefcounter] << " is: " << (sbd[icopy].foodnumber[sefcounter]) * (stoi(fod.price[jcopy])) << '\n';
                                    sefcounter++;
                                    // extending(&list, l);
                                }
                                else
                                {
                                    cout << '\n'
                                         << "the food is not in the menu!" << '\n';
                                }
                            }
                            // for (int i = 0; i < l; i++)
                            // {
                            //     for (int j = 0; j < 2; j++)
                            //     {
                            //         cout << '\n'
                            //              << list[i][j] << '\n';
                            //     }
                            // }
                        }
                        // result = ((sbd[icopy].scounter) - (sefcounter));
                        // if (result < 0)
                        //     result = -result;
                        sbd[icopy].scounter = sefcounter;
                    }
                    else if (p == 2)
                    {
                        int signal = 0, signal2 = 0;
                        system("clear");
                        cin.get();
                        cout << "1 - Delete total of a food" << '\n'
                             << "2 - Change in the number of a meal" << '\n'
                             << '\n'
                             << "Enter the desired option number: ";
                        cin >> p;
                        cin.get();
                        system("clear");
                        if (p == 1)
                        {
                            for (int i = 0; i < sbd[icopy].scounter; i++)
                            {
                                cout << "food " << i + 1 << " : " << sbd[icopy].foodname[i] << '\n';
                                cout << "number: " << sbd[icopy].foodnumber[i] << '\n';
                                cout << "price of each food: " << sbd[icopy].foodprice[i] << '\n';
                                cout << "price of " << sbd[icopy].foodnumber[i] << ' ' << sbd[icopy].foodname[i] << " is: " << (sbd[icopy].foodnumber[i]) * (stoi(sbd[icopy].foodprice[i])) << '\n';
                                cout << "----------------" << '\n';
                            }
                            cout << '\n'
                                 << '\n'
                                 << "Enter the name of the food you want to delete: ";
                            getline(cin, fn);
                            for (int i = 0; i < sbd[icopy].scounter; i++)
                            {
                                if (fn == sbd[icopy].foodname[i])
                                {
                                    signal = 1;
                                    sbd[icopy].foodname[i] = "";
                                    sbd[icopy].foodnumber[i] = 0;
                                    sbd[icopy].foodprice[i] = "";
                                    sbd[icopy].scounter -= 1;
                                    for (i; i < sefcounter; i++)
                                    {
                                        sbd[icopy].foodname[i] = sbd[icopy].foodname[i + 1];
                                        sbd[icopy].foodnumber[i] = sbd[icopy].foodnumber[i + 1];
                                        sbd[icopy].foodprice[i] = sbd[icopy].foodprice[i + 1];
                                    }
                                }
                            }
                            if (signal == 0)
                            {
                                system("clear");
                                cout << "food not found!" << '\n';
                            }
                            else
                            {
                                system("clear");
                                cout << "the food successfuly deleted!" << '\n';
                            }
                            system("pause");
                        }
                        else if (p == 2)
                        {
                            int newnum;
                            for (int i = 0; i < sbd[icopy].scounter; i++)
                            {
                                cout << "food " << i + 1 << " : " << sbd[icopy].foodname[i] << '\n';
                                cout << "number: " << sbd[icopy].foodnumber[i] << '\n';
                                cout << "price of each food: " << sbd[icopy].foodprice[i] << '\n';
                                cout << "price of " << sbd[icopy].foodnumber[i] << ' ' << sbd[icopy].foodname[i] << " is: " << (sbd[icopy].foodnumber[i]) * (stoi(sbd[icopy].foodprice[i])) << '\n';
                                cout << "----------------" << '\n';
                            }
                            cout << '\n'
                                 << '\n'
                                 << "Enter the name of the food you want to change number: ";
                            getline(cin, fn);
                            for (int i = 0; i < sbd[icopy].scounter; i++)
                            {
                                if (fn == sbd[icopy].foodname[i])
                                {
                                    signal2 = 1;
                                    cout << '\n'
                                         << "insert new number: ";
                                    cin >> newnum;
                                    cin.get();
                                    sbd[icopy].foodnumber[i] = newnum;
                                    i = (sbd[icopy].scounter) + 1;
                                }
                            }
                            if (signal2 == 0)
                            {
                                system("clear");
                                cout << "food not found";
                            }
                        }
                    }
                    else
                    {
                        system("clear");
                        cout << "invalid input!" << '\n';
                    }
                }
                else if (inom == 3)
                {
                    system("clear");
                    unsigned long long int totalprice = 0;
                    int codeexist = 0, oncode = 1, result = 0, ioff;
                    string pasokh, oc;
                    if ((sbd[icopy].foodname[0]) != "")
                    {
                        for (int i = 0; i < sbd[icopy].scounter; i++)
                        {
                            cout << "food " << i + 1 << " : " << sbd[icopy].foodname[i] << '\n';
                            cout << "number: " << sbd[icopy].foodnumber[i] << '\n';
                            cout << "price of each food: " << sbd[icopy].foodprice[i] << '\n';
                            cout << "price of " << sbd[icopy].foodnumber[i] << ' ' << sbd[icopy].foodname[i] << " is: " << (sbd[icopy].foodnumber[i]) * (stoi(sbd[icopy].foodprice[i])) << '\n';
                            cout << "----------------" << '\n';
                        }
                        for (int i = 0; i < sbd[icopy].scounter; i++)
                        {
                            totalprice += (sbd[icopy].foodnumber[i]) * (stoi(sbd[icopy].foodprice[i]));
                        }
                        cout << '\n'
                             << '\n'
                             << "Total price is: " << totalprice << '\n'
                             << '\n'
                             << "do you have offer code (y/n)? ";
                        cin.get();
                        getline(cin, pasokh);
                        if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                        {
                            while (oncode)
                            {
                                cout << '\n'
                                     << "insert your code (insert 0 for go back): ";
                                getline(cin, oc);
                                if (oc == "0")
                                {
                                    oncode = 0;
                                }
                                for (int i = 0; i < os; i++)
                                {
                                    if (oc == offercode[i])
                                    {
                                        codeexist = 1;
                                        ioff = i;
                                        oncode = 0;
                                    }
                                }
                                if ((codeexist == 0) && (oncode != 0))
                                {
                                    cout << '\n'
                                         << "your code not found , press Enter to countinue";
                                    cin.get();
                                }
                            }
                            if (codeexist)
                            {
                                totalprice = 0;
                                system("clear");
                                for (int i = 0; i < sbd[icopy].scounter; i++)
                                {
                                    cout << "food " << i + 1 << " : " << sbd[icopy].foodname[i] << '\n';
                                    cout << "number: " << sbd[icopy].foodnumber[i] << '\n';
                                    cout << "price of each food: " << sbd[icopy].foodprice[i] << '\n';
                                    cout << "price of " << sbd[icopy].foodnumber[i] << ' ' << sbd[icopy].foodname[i] << " is: " << (sbd[icopy].foodnumber[i]) * (stoi(sbd[icopy].foodprice[i])) << '\n';
                                    cout << "----------------" << '\n';
                                }
                                for (int i = 0; i < sbd[icopy].scounter; i++)
                                {
                                    totalprice += (sbd[icopy].foodnumber[i]) * (stoi(sbd[icopy].foodprice[i]));
                                }
                                cout << '\n'
                                     << '\n'
                                     << "Total price is: " << (totalprice / 2) << '\n';
                                totalprice /= 2;
                            }
                        }
                        for (int i = 0; i < fct[icopy].scounter; i++)
                        {
                            result += stoi(fct[icopy].totalprice);
                        }
                        // stoi(fct[icopy].foodprice[i])
                        if ((result >= 150000) && (codeexist == 0))
                        {
                            system("clear");
                            for (int i = 0; i < sbd[icopy].scounter; i++)
                            {
                                cout << "food " << i + 1 << " : " << sbd[icopy].foodname[i] << '\n';
                                cout << "number: " << sbd[icopy].foodnumber[i] << '\n';
                                cout << "price of each food: " << sbd[icopy].foodprice[i] << '\n';
                                cout << "price of " << sbd[icopy].foodnumber[i] << ' ' << sbd[icopy].foodname[i] << " is: " << (sbd[icopy].foodnumber[i]) * (stoi(sbd[icopy].foodprice[i])) << '\n';
                                cout << "----------------" << '\n';
                            }
                            // for (int i = 0; i < sbd[icopy].scounter; i++)
                            // {
                            //     totalprice += (sbd[icopy].foodnumber[i]) * (stoi(sbd[icopy].foodprice[i]));
                            // }
                            cout << '\n'
                                 << '\n'
                                 << "Total price is: " << totalprice - (totalprice * 0.2) << '\n';
                            totalprice = totalprice - (totalprice * 0.2);
                        }
                        if (cust.wallet[icopy] != "")
                        {
                            if (totalprice > stoi(cust.wallet[icopy]))
                            {
                                cout << '\n'
                                     << '\n'
                                     << "your money is not enough! , pleas charge your wallet or delete a food or change food number" << '\n';
                            }
                            else
                            {
                                if (codeexist)
                                {
                                    offercode[ioff] = "";
                                    extending(&offercode, ol, i);
                                    for (int i = 0; i < sbd[icopy].scounter; i++, ifactor++)
                                    {
                                        fct[icopy].foodname[ifactor] = sbd[icopy].foodname[i];
                                        fct[icopy].foodnumber[ifactor] = sbd[icopy].foodnumber[i];
                                        fct[icopy].foodprice[ifactor] = sbd[icopy].foodprice[i];
                                    }
                                    fct[icopy].scounter = ifactor;
                                    fct[icopy].totalprice = to_string(stoi(fct[icopy].totalprice) + totalprice);
                                    cust.wallet[icopy] = to_string(stoi(cust.wallet[icopy]) - totalprice);
                                    for (int i = 0; i < sbd[icopy].scounter; i++)
                                    {
                                        sbd[icopy].foodname[i] = "";
                                        sbd[icopy].foodnumber[i] = 0;
                                        sbd[icopy].foodprice[i] = "";
                                        sbd[icopy].scounter = 0;
                                    }
                                    cout << '\n'
                                         << '\n'
                                         << "*The purchase was successful*" << '\n';
                                }
                                else
                                {
                                    for (int i = 0; i < sbd[icopy].scounter; i++, ifactor++)
                                    {
                                        fct[icopy].foodname[ifactor] = sbd[icopy].foodname[i];
                                        fct[icopy].foodnumber[ifactor] = sbd[icopy].foodnumber[i];
                                        fct[icopy].foodprice[ifactor] = sbd[icopy].foodprice[i];
                                    }
                                    fct[icopy].scounter = ifactor;
                                    fct[icopy].totalprice = to_string(stoi(fct[icopy].totalprice) + totalprice);
                                    cust.wallet[icopy] = to_string(stoi(cust.wallet[icopy]) - totalprice);
                                    for (int i = 0; i < sbd[icopy].scounter; i++)
                                    {
                                        sbd[icopy].foodname[i] = "";
                                        sbd[icopy].foodnumber[i] = 0;
                                        sbd[icopy].foodprice[i] = "";
                                        sbd[icopy].scounter = 0;
                                    }
                                    cout << '\n'
                                         << '\n'
                                         << "*The purchase was successful*" << '\n';
                                }
                            }
                        }
                        else
                        {
                            system("clear");
                            cout << "your wallet is empty!" << '\n';
                        }
                        system("pause");
                    }
                    else
                    {
                        cout << "no food exist!" << '\n';
                        system("pause");
                    }
                    // cout << "do you have offer code (y/n)? ";
                    // getline(cin, pasokh);
                    // if (pasokh[0] == 'y' || pasokh[1] == 'Y')
                    // {
                    //     getline(cin, offercode);
                    // }
                }
                else if (inom == 4)
                {
                    int notsix = 1;
                    cin.get();
                    while (notsix)
                    {
                        system("clear");
                        int p = 0, ip = 0, random2, p2 = 1;
                        string ran, ne, nep, npn, nff;
                        cout << "Which field do you want to change?"
                             << " (NOTICE: you can not change first name , last name , username) " << '\n'
                             << '\n'
                             << "1 - change username password" << '\n'
                             << "2 - chane email" << '\n'
                             << "3 - change email password" << '\n'
                             << "4 - change phone number" << '\n'
                             << "5 - change favorit food" << '\n'
                             << "6 - EXIT" << '\n'
                             << '\n'
                             << "insert the number of menu: ";
                        cin >> p;
                        cin.get();
                        if (p == 1)
                        {
                            int pw = 1;
                            while (pw)
                            {
                                system("clear");
                                cout << "1 - use suggestion password" << '\n'
                                     << "2 - insert custome password" << '\n'
                                     << "3 - EXIT" << '\n'
                                     << '\n'
                                     << "insert the number of menu: ";
                                cin >> ip;
                                cin.get();
                                if (ip == 1)
                                {
                                    system("clear");
                                    ran = "";
                                    srand(time(0));
                                    cout << "your last password is: " << cust.password[icopy] << '\n';
                                    for (int i = 0; i < 6; i++)
                                    {
                                        random2 = rand() % 10;
                                        ran += to_string(random2);
                                    }
                                    ran += "FN";
                                    // system("clear");
                                    cout << "suggestion password is: " << ran << '\n'
                                         << "Do you want to use these password (y/n) : ";
                                    getline(cin, pasokh);
                                    if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                    {
                                        cout << "now your password is : " << ran << '\n';
                                        cust.password[icopy] = ran;
                                        system("pause");
                                    }
                                }
                                else if (ip == 2)
                                {
                                    system("clear");
                                    cout << "your password at these moment: " << cust.password[icopy];
                                    ran = "";
                                    while (p2)
                                    {
                                        cout << '\n'
                                             << "insert your password: ";
                                        getline(cin, ran);
                                        if ((ran.length()) >= 8)
                                        {
                                            system("clear");
                                            cout << '\n'
                                                 << "*your password successfuly change*" << '\n';
                                            cust.password[icopy] = ran;
                                            p2 = 0;
                                            system("pause");
                                        }
                                        else
                                        {
                                            cout << '\n'
                                                 << "Your password must be at least 8 characters long!" << '\n';
                                        }
                                    }
                                }
                                else if (ip == 3)
                                {
                                    pw = 0;
                                }
                                else
                                {
                                    system("clear");
                                    cout << "invalid input";
                                }
                            }
                        }
                        else if (p == 2)
                        {
                            system("clear");
                            cout << "your email at these moment: " << cust.email[icopy] << '\n';
                            cout << "insert your new email: ";
                            getline(cin, ne);
                            cout << '\n'
                                 << "insert your email password: ";
                            getline(cin, nep);
                            cust.email[icopy] = ne;
                            cust.emailpassword[icopy] = nep;
                            cout << '\n'
                                 << "*your email successfuly change*" << '\n';
                            system("pause");
                        }
                        else if (p == 3)
                        {
                            system("clear");
                            cout << "your emailpassword at these moment: " << cust.emailpassword[icopy] << '\n';
                            cout << "insert your new emailpassword: ";
                            getline(cin, nep);
                            cust.emailpassword[icopy] = nep;
                            cout << '\n'
                                 << "*your emailpassword successfuly change*" << '\n';
                            system("pause");
                        }
                        else if (p == 4)
                        {
                            system("clear");
                            cout << "your phone number at these moment: " << cust.phonenumber[icopy] << '\n';
                            cout << "insert your new phone number: ";
                            getline(cin, npn);
                            cust.phonenumber[icopy] = npn;
                            cout << '\n'
                                 << "*your phone number successfuly change*" << '\n';
                            system("pause");
                        }
                        else if (p == 5)
                        {
                            system("clear");
                            cout << "your favorit food at these moment: " << cust.favoritfood[icopy] << '\n';
                            cout << "insert your new favorit food : ";
                            getline(cin, nff);
                            cust.favoritfood[icopy] = nff;
                            cout << '\n'
                                 << "*your favorit food successfuly change*" << '\n';
                            system("pause");
                        }
                        else
                        {
                            notsix = 0;
                        }
                    }
                }
                else if (inom == 5)
                {
                    cin.get();
                    string money;
                    system("clear");
                    if (cust.wallet[icopy] == "0")
                    {
                        system("clear");
                        cout << "your wallet is empty" << '\n';
                    }
                    else
                    {
                        system("clear");
                        cout << "cash: " << cust.wallet[icopy];
                    }
                    cout << '\n'
                         << "Enter the amount of money you want to charge: ";
                    getline(cin, money);
                    if ((stoi(money)) != 0 && (stoi(money) > 0))
                    {
                        cust.wallet[icopy] = to_string(stoi(cust.wallet[icopy]) + stoi(money));
                    }
                    else
                    {
                        system("clear");
                        cout << "invalid!";
                        system("puase");
                    }
                }
                else if (inom == 6)
                {
                    system("clear");
                    if (fct[icopy].scounter > 0)
                    {
                        for (int i = 0; i < fct[icopy].scounter; i++)
                        {
                            cout << "food: " << fct[icopy].foodname[i] << '\n'
                                 << "number: " << fct[icopy].foodnumber[i] << '\n'
                                 << "The price of each food: " << fct[icopy].foodprice[i] << '\n'
                                 << "The price of " << fct[icopy].foodnumber[i] << ' ' << fct[icopy].foodname[i] << "is: " << (fct[icopy].foodnumber[i]) * (stoi(fct[icopy].foodprice[i])) << '\n'
                                 << "----------------" << '\n';
                        }
                        cout << '\n'
                             << '\n'
                             << "Totalprice is: " << fct[icopy].totalprice << '\n';
                        system("pause");
                    }
                    else
                    {
                        cout << "no factor exist!" << '\n';
                        system("pause");
                    }
                }
                else if (inom == 7)
                    menu = 0;
            }
        }
        //------------------------------------------------------------------------------------------------------
        else if (nom == 2)
        {
            a++;
            string password, pasokh, spassword, vorodi;
            int username = 1, pass = 1;
            system("clear");
            cout << "pleas insert your first name: ";
            getline(cin, cust.firstname[a]);
            cout << '\n'
                 << "pleas insert your last name: ";

            getline(cin, cust.lastname[a]);
            while (username)
            {
                int exist = 1;
                cout << '\n'
                     << "pleas insert your username: ";
                getline(cin, vorodi);
                for (int i = 0; i < a; i++)
                {
                    if (cust.username[i] == vorodi)
                    {
                        exist = 0;
                        i = a;
                    }
                }
                if (((vorodi.length()) >= 5) && exist)
                    username = 0;
                else
                {
                    if (vorodi.length() < 5)
                        cout << '\n'
                             << "your user name most be more than 5 character!" << '\n';
                    if (exist == 0)
                        cout << '\n'
                             << "duplicate username , pleas chang it" << '\n';
                }
            }
            cust.username[a] = vorodi;
            srand(time(0));
            for (int i = 0; i < 6; i++)
            {
                randomm = rand() % 10;
                password += to_string(randomm);
            }
            password += "FN";
            cout << '\n'
                 << "suggested password:"
                 << password;
            cout << '\n'
                 << '\n'
                 << "if you want to use this for password insert y else insert n? ";
            getline(cin, pasokh);
            if (pasokh[0] == 'y')
            {
                cout << '\n'
                     << "ok , now your password is " << password << '\n';
                cust.password[a] = password;
            }
            else
            {
                while (pass)
                {
                    cout << '\n'
                         << "ok , insert your password: ";
                    getline(cin, spassword);
                    if ((spassword.length()) >= 8)
                    {
                        cust.password[a] = spassword;
                        pass = 0;
                    }
                    else
                    {
                        cout << '\n'
                             << "Your password must be at least 8 characters long!" << '\n';
                    }
                }
            }
            cout << '\n'
                 << "pleas insert your email: ";
            getline(cin, cust.email[a]);
            cout << '\n'
                 << "pleas insert your email password: ";
            getline(cin, cust.emailpassword[a]);
            cout << '\n'
                 << "pleas insert your phone number: ";
            getline(cin, cust.phonenumber[a]);
            cout << '\n'
                 << "pleas insert your favorit food: ";
            getline(cin, cust.favoritfood[a]);
            cout << '\n'
                 << "*your information succesfuly saved*";
            cin.get();
        }
        //---------------------------------------------------------------------------------------------------------
        else if (nom == 3)
        {
            string username, password, pasokh, email, empass, phone, favfood;
            int i = 0, icopy = 0, exist = 0, exist2 = 0, exist3 = 0, fpass = 1, ffood = 1, onusername = 1, onemail = 1, onphone = 1, menu = 1, sefcounter = 0, result;
            system("clear");
            while (onusername)
            {
                onusername = 1;
                cout << '\n'
                     << "insert your username: ";
                getline(cin, username);
                for (i = 0; i <= b; i++)
                {
                    if (username == emp.username[i])
                    {
                        exist = 1;
                        icopy = i;
                        i = a + 1;
                    }
                }
                cout << '\n'
                     << "insert your password: ";
                getline(cin, password);
                if ((password == emp.password[icopy]) && exist)
                {
                    onusername = 0;
                }
                else
                {
                    cout << '\n'
                         << "username or password is FALSE!" << '\n'
                         << '\n'
                         << "do you want try another way (y/n)? ";
                    getline(cin, pasokh);
                    if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                    {
                        while (onemail)
                        {
                            cout << '\n'
                                 << "insert your Email: ";
                            getline(cin, email);
                            // int j = 0, jcopy;
                            for (i = 0; i <= a; i++)
                            {
                                if (email == emp.email[i])
                                {
                                    exist2 = 1;
                                    icopy = i;
                                    i = a + 1;
                                }
                            }
                            cout << '\n'
                                 << "insert your Emailpassword: ";
                            getline(cin, empass);
                            if ((empass == emp.emailpassword[icopy]) && exist2)
                            {
                                onusername = 0;
                                onemail = 0;
                            }
                            else
                            {
                                cout << '\n'
                                     << "Email or Emailpassword is FALSE!" << '\n'
                                     << '\n'
                                     << "do you want go back (y/n)?";
                                getline(cin, pasokh);
                                if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                {
                                    onemail = 0;
                                }
                                else
                                {
                                    cout << '\n'
                                         << "do you want try another way (y/n)? ";
                                    getline(cin, pasokh);
                                    if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                    {
                                        while (onphone)
                                        {
                                            cout << '\n'
                                                 << "insert your phonenumber: ";
                                            getline(cin, phone);
                                            // int k = 0, kcopy;
                                            for (i = 0; i <= a; i++)
                                            {
                                                if (phone == emp.phonenumber[i])
                                                {
                                                    exist3 = 1;
                                                    icopy = i;
                                                    i = a + 1;
                                                }
                                            }
                                            cout << '\n'
                                                 << "pleas insert your favorit food: ";
                                            getline(cin, favfood);
                                            if ((favfood == emp.favoritfood[icopy]) && exist3)
                                            {
                                                onphone = 0;
                                                onemail = 0;
                                                onusername = 0;
                                            }
                                            else
                                            {
                                                cout << '\n'
                                                     << "phonenumber or favoritfod is FALSE!" << '\n'
                                                     << '\n'
                                                     << "do you want go back (y/n)?";
                                                getline(cin, pasokh);
                                                if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                                {
                                                    onphone = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            while (menu)
            {
                system("clear");
                cout << '\n'
                     << "1 - View the list of foods along with their prices" << '\n'
                     << "2 - Change the existing list of foods along with their prices" << '\n'
                     << "3 - Change employee information" << '\n'
                     << "4 - Add new discount codes" << '\n'
                     << "5 - View all customer purchase invoices" << '\n'
                     << "6 - EXIT"
                     << '\n'
                     << '\n'
                     << "insert number of menu: ";
                cin >> inom;
                cin.get();
                if (inom == 1)
                {
                    system("clear");
                    for (int i = 0; i <= d; i++)
                    {
                        cout << fod.name[i] << "----------------" << fod.price[i] << '\n'
                             << '\n';
                    }
                    system("pause");
                }
                else if (inom == 2)
                {
                    int pasokh, uf = 1, infood = 1, ie;
                    string fn, price;
                    ie = 0, uf = 1;
                    system("clear");
                    for (int i = 0; i <= d; i++)
                    {
                        cout << fod.name[i] << "----------------" << fod.price[i] << '\n'
                             << '\n';
                    }
                    // system("clear");
                    cout << "insert the name of the food for edit price: ";
                    getline(cin, fn);
                    for (int i = 0; i <= d; i++)
                    {
                        if (fn == fod.name[i])
                        {
                            ie = i;
                            uf = 0;
                        }
                    }
                    if (uf == 0)
                    {
                        cout << '\n'
                             << "insert price of " << fn << ": ";
                        getline(cin, price);
                        if ((stoi(price) != 0) && (stoi(price)) > 0)
                        {
                            fod.price[ie] = price;
                            for (int i = 0; i <= a; i++)
                            {
                                for (int j = 0; j < sbd[i].scounter; j++)
                                {
                                    if (fn == sbd[i].foodname[j])
                                    {
                                        sbd[i].foodprice[j] = price;
                                    }
                                }
                            }
                            cout << '\n'
                                 << "the food price saved" << '\n';
                        }
                        else
                        {
                            cout << '\n'
                                 << "invalid input!";
                        }
                    }
                    else
                    {
                        cout << '\n'
                             << "food not found!" << '\n';
                    }
                    system("pause");
                }
                else if (inom == 3)
                {
                    int notsix = 1;
                    while (notsix)
                    {
                        system("clear");
                        int p = 0, ip = 0, random2, p2 = 1;
                        string ran, ne, nep, npn, nff;
                        cout << "Which field do you want to change?"
                             << " (NOTICE: you can not change first name , last name , username) " << '\n'
                             << '\n'
                             << "1 - change username password" << '\n'
                             << "2 - chane email" << '\n'
                             << "3 - change email password" << '\n'
                             << "4 - change phone number" << '\n'
                             << "5 - change favorit food" << '\n'
                             << "6 - EXIT" << '\n'
                             << '\n'
                             << "insert the number of menu: ";
                        cin >> p;
                        cin.get();
                        if (p == 1)
                        {
                            int pw = 1;
                            while (pw)
                            {
                                system("clear");
                                cout << "1 - use suggestion password" << '\n'
                                     << "2 - insert custome password" << '\n'
                                     << "3 - EXIT" << '\n'
                                     << '\n'
                                     << "insert the number of menu: ";
                                cin >> ip;
                                cin.get();
                                if (ip == 1)
                                {
                                    system("clear");
                                    ran = "";
                                    srand(time(0));
                                    cout << "your last password is: " << emp.password[icopy] << '\n';
                                    for (int i = 0; i < 6; i++)
                                    {
                                        random2 = rand() % 10;
                                        ran += to_string(random2);
                                    }
                                    ran += "FN";
                                    // system("clear");
                                    cout << "suggestion password is: " << ran << '\n'
                                         << "Do you want to use these password (y/n) : ";
                                    getline(cin, pasokh);
                                    if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                    {
                                        cout << "now your password is : " << ran << '\n';
                                        emp.password[icopy] = ran;
                                        system("pause");
                                    }
                                }
                                else if (ip == 2)
                                {
                                    system("clear");
                                    cout << "your password at these moment: " << emp.password[icopy];
                                    ran = "";
                                    while (p2)
                                    {
                                        cout << '\n'
                                             << "insert your password: ";
                                        getline(cin, ran);
                                        if ((ran.length()) >= 8)
                                        {
                                            system("clear");
                                            cout << '\n'
                                                 << "*your password successfuly change*" << '\n';
                                            emp.password[icopy] = ran;
                                            p2 = 0;
                                            system("pause");
                                        }
                                        else
                                        {
                                            cout << '\n'
                                                 << "Your password must be at least 8 characters long!" << '\n';
                                        }
                                    }
                                }
                                else if (ip == 3)
                                {
                                    pw = 0;
                                }
                                else
                                {
                                    system("clear");
                                    cout << "invalid input";
                                }
                            }
                        }
                        else if (p == 2)
                        {
                            system("clear");
                            cout << "your email at these moment: " << emp.email[icopy] << '\n';
                            cout << "insert your new email: ";
                            getline(cin, ne);
                            cout << '\n'
                                 << "insert your email password: ";
                            getline(cin, nep);
                            emp.email[icopy] = ne;
                            emp.emailpassword[icopy] = nep;
                            cout << '\n'
                                 << "*your email successfuly change*" << '\n';
                            system("pause");
                        }
                        else if (p == 3)
                        {
                            system("clear");
                            cout << "your emailpassword at these moment: " << emp.emailpassword[icopy] << '\n';
                            cout << "insert your new emailpassword: ";
                            getline(cin, nep);
                            emp.emailpassword[icopy] = nep;
                            cout << '\n'
                                 << "*your emailpassword successfuly change*" << '\n';
                            system("pause");
                        }
                        else if (p == 4)
                        {
                            system("clear");
                            cout << "your phone number at these moment: " << emp.phonenumber[icopy] << '\n';
                            cout << "insert your new phone number: ";
                            getline(cin, npn);
                            emp.phonenumber[icopy] = npn;
                            cout << '\n'
                                 << "*your phone number successfuly change*" << '\n';
                            system("pause");
                        }
                        else if (p == 5)
                        {
                            system("clear");
                            cout << "your favorit food at these moment: " << emp.favoritfood[icopy] << '\n';
                            cout << "insert your new favorit food : ";
                            getline(cin, nff);
                            emp.favoritfood[icopy] = nff;
                            cout << '\n'
                                 << "*your favorit food successfuly change*" << '\n';
                            system("pause");
                        }
                        else
                        {
                            notsix = 0;
                        }
                    }
                }
                else if (inom == 4)
                {
                    int ce = 0;
                    string code;
                    system("clear");
                    cout << "insert the code: ";
                    getline(cin, code);
                    for (int i = 0; i < ol; i++)
                    {
                        if (code == offercode[i])
                        {
                            ce = 1;
                            i = ol + 1;
                        }
                    }
                    if (ce)
                    {
                        cout << '\n'
                             << "offercode already is exist!";
                    }
                    else
                    {
                        extendplus(&offercode, ol);
                        offercode[ol - 1] = code;
                        // for (int i = 0; i < ol; i++)
                        // {
                        //     cout << offercode[i] << '\n';
                        // }
                    }
                    system("pause");
                }
                else if (inom == 5)
                {
                    string customer;
                    int custexist = 0, ic;
                    system("clear");
                    cout << "insert customer username: ";
                    getline(cin, customer);
                    for (int i = 0; i <= a; i++)
                    {
                        if (customer == cust.username[i])
                        {
                            custexist = 1;
                            ic = i;
                            i = a + 1;
                        }
                    }
                    if (custexist)
                    {
                        for (int i = 0; i < fct[ic].scounter; i++)
                        {
                            cout << "food: " << fct[ic].foodname[i] << '\n'
                                 << "number: " << fct[ic].foodnumber[i] << '\n'
                                 << "The price of each food: " << fct[ic].foodprice[i] << '\n'
                                 << "The price of " << fct[ic].foodnumber[i] << ' ' << fct[ic].foodname[i] << "is: " << (fct[ic].foodnumber[i]) * (stoi(fct[ic].foodprice[i])) << '\n'
                                 << "----------------" << '\n';
                        }
                        cout << '\n'
                             << '\n'
                             << "Totalprice is: " << fct[ic].totalprice << '\n';
                    }
                    else
                    {
                        cout << '\n'
                             << "user not found!" << '\n';
                    }
                    system("pause");
                }
                else if (inom == 6)
                {
                    menu = 0;
                }
            }
        }
        else if (nom == 4)
        {
            int im, manager = 1, beformanage = 1, mue = 0;
            string manageuser, managepass;
            system("clear");
            while (beformanage)
            {
                cout << "insert username: ";
                getline(cin, manageuser);
                if (manageuser == man.username[c])
                {
                    mue = 1;
                }
                cout << '\n'
                     << "insert the password: ";
                getline(cin, managepass);
                if ((managepass == man.password[c]) && (mue == 1))
                {
                    beformanage = 0;
                }
                if (beformanage)
                {
                    cout << '\n'
                         << "username or password is false!" << '\n'
                         << '\n';
                }
            }
            while (manager)
            {
                system("clear");
                cout << '\n'
                     << "1 - View the list of foods along with their prices" << '\n'
                     << "2 - Change the existing list of foods along with their prices" << '\n'
                     << "3 - Change employee information" << '\n'
                     << "4 - Change customer information" << '\n'
                     << "5 - Add new discount codes" << '\n'
                     << "6 - View all customer purchase invoices" << '\n'
                     << "7 - EXIT"
                     << '\n'
                     << '\n'
                     << "insert number of menu: ";
                cin >> im;
                cin.get();
                if (im == 1)
                {
                    system("clear");
                    for (int i = 0; i <= d; i++)
                    {
                        cout << fod.name[i] << "----------------" << fod.price[i] << '\n'
                             << '\n';
                    }
                    cout << "press ENTER for go back";
                    cin.get();
                }
                else if (im == 2)
                {
                    int pasokh, uf = 1, infood = 1, ie;
                    string fn, price;
                    while (infood)
                    {
                        ie = 0, uf = 1;
                        system("clear");
                        cout << "1 - Add a food" << '\n'
                             << "2 - Delete a food" << '\n'
                             << "3 - edit price of food" << '\n'
                             << "4 - EXIT" << '\n'
                             << '\n'
                             << "insert number of menu: ";
                        cin >> pasokh;
                        cin.get();
                        if (pasokh == 1)
                        {
                            system("clear");
                            cout << "Enter the name of the food: ";
                            getline(cin, fn);
                            for (int i = 0; i <= d; i++)
                            {
                                if (fn == fod.name[i])
                                {
                                    ie = i;
                                    uf = 0;
                                }
                            }
                            if (uf)
                            {
                                d++;
                                fod.name[d] = fn;
                                cout << '\n'
                                     << "insert price of " << fn << ": ";
                                getline(cin, price);
                                if ((stoi(price) != 0) && (stoi(price)) > 0)
                                {
                                    fod.price[d] = price;
                                    cout << '\n'
                                         << "the food and price saved" << '\n';
                                    // system("pause");
                                }
                                else
                                {
                                    cout << '\n'
                                         << "invalid input!" << '\n';
                                }
                            }
                            else
                            {
                                cout << '\n'
                                     << "duplicate food , you can change the price of " << fn << " from The third part of the menu"
                                     << '\n';
                            }
                            system("pause");
                        }
                        else if (pasokh == 2)
                        {
                            int ff = 1;
                            system("clear");
                            for (int i = 0; i <= d; i++)
                            {
                                cout << fod.name[i] << "----------------" << fod.price[i] << '\n'
                                     << '\n';
                            }
                            cout << '\n'
                                 << '\n'
                                 << "Enter the name of the food you want to delete: ";
                            getline(cin, fn);
                            for (int i = 0; i <= d; i++)
                            {
                                if (fn == fod.name[i])
                                {
                                    ff = 0;
                                    fod.name[i] = "";
                                    fod.price[i] = "";
                                    for (int j = i; j <= d; j++)
                                    {
                                        fod.name[j] = fod.name[j + 1];
                                        fod.price[j] = fod.price[j + 1];
                                    }
                                    for (int i = 0; i <= a; i++)
                                    {
                                        for (int j = 0; j < sbd[i].scounter; j++)
                                        {
                                            if (fn == sbd[i].foodname[j])
                                            {
                                                sbd[i].foodname[j] = "";
                                                sbd[i].foodnumber[j] = 0;
                                                sbd[i].foodprice[j] = "";
                                                for (int k = j; k < sbd[i].scounter; k++)
                                                {
                                                    sbd[i].foodname[k] = sbd[i].foodname[k + 1];
                                                    sbd[i].foodnumber[k] = sbd[i].foodnumber[k + 1];
                                                    sbd[i].foodprice[k] = sbd[i].foodprice[k + 1];
                                                }
                                                sbd[i].scounter--;
                                            }
                                        }
                                    }
                                    d--;
                                    cout << '\n'
                                         << "Food was successfully removed" << '\n';
                                    system("pause");
                                }
                            }
                            if (ff)
                            {
                                cout << '\n'
                                     << "food not found" << '\n';
                                system("pause");
                            }
                        }
                        else if (pasokh == 3)
                        {
                            int pasokh, uf = 1, infood = 1, ie;
                            string fn, price;
                            ie = 0, uf = 1;
                            system("clear");
                            for (int i = 0; i <= d; i++)
                            {
                                cout << fod.name[i] << "----------------" << fod.price[i] << '\n'
                                     << '\n';
                            }
                            // system("clear");
                            cout << "insert the name of the food for edit price: ";
                            getline(cin, fn);
                            for (int i = 0; i <= d; i++)
                            {
                                if (fn == fod.name[i])
                                {
                                    ie = i;
                                    uf = 0;
                                }
                            }
                            if (uf == 0)
                            {
                                cout << '\n'
                                     << "insert price of " << fn << ": ";
                                getline(cin, price);
                                if ((stoi(price) != 0) && (stoi(price)) > 0)
                                {
                                    fod.price[ie] = price;
                                    for (int i = 0; i <= a; i++)
                                    {
                                        for (int j = 0; j < sbd[i].scounter; j++)
                                        {
                                            if (fn == sbd[i].foodname[j])
                                            {
                                                sbd[i].foodprice[j] = price;
                                            }
                                        }
                                    }
                                    cout << '\n'
                                         << "the food price saved" << '\n';
                                }
                                else
                                {
                                    cout << '\n'
                                         << "invalid input!";
                                }
                            }
                            else
                            {
                                cout << '\n'
                                     << "food not found!" << '\n';
                            }
                            system("pause");
                        }
                        else if (pasokh == 4)
                        {
                            infood = 0;
                        }
                    }
                }
                else if (im == 3)
                {
                    int menu, onmanage = 1;
                    while (onmanage)
                    {
                        system("clear");
                        cout << "1 - add new employee" << '\n'
                             << "2 - delete a employee" << '\n'
                             << "3 - Change employee information" << '\n'
                             << "4 - EXIT"
                             << '\n'
                             << '\n'
                             << "insert number of menu: ";
                        cin >> menu;
                        cin.get();
                        if (menu == 1)
                        {
                            b++;
                            string password, pasokh, spassword, vorodi;
                            int username = 1, pass = 1;
                            system("clear");
                            cout << "pleas insert your first name: ";
                            getline(cin, emp.firstname[b]);
                            cout << '\n'
                                 << "pleas insert your last name: ";

                            getline(cin, emp.lastname[b]);
                            while (username)
                            {
                                int exist = 1;
                                cout << '\n'
                                     << "pleas insert your username: ";
                                getline(cin, vorodi);
                                for (int i = 0; i < a; i++)
                                {
                                    if (emp.username[i] == vorodi)
                                    {
                                        exist = 0;
                                        i = a;
                                    }
                                }
                                if (((vorodi.length()) >= 5) && exist)
                                    username = 0;
                                else
                                {
                                    if (vorodi.length() < 5)
                                        cout << '\n'
                                             << "your user name most be more than 5 character!" << '\n';
                                    if (exist == 0)
                                        cout << '\n'
                                             << "duplicate username , pleas chang it" << '\n';
                                }
                            }
                            emp.username[b] = vorodi;
                            srand(time(0));
                            for (int i = 0; i < 6; i++)
                            {
                                randomm = rand() % 10;
                                password += to_string(randomm);
                            }
                            password += "FN";
                            cout << '\n'
                                 << "suggested password:"
                                 << password;
                            cout << '\n'
                                 << '\n'
                                 << "if you want to use this for password insert y else insert n? ";
                            getline(cin, pasokh);
                            if (pasokh[0] == 'y')
                            {
                                cout << '\n'
                                     << "ok , now your password is " << password << '\n';
                                emp.password[b] = password;
                            }
                            else
                            {
                                while (pass)
                                {
                                    cout << '\n'
                                         << "ok , insert your password: ";
                                    getline(cin, spassword);
                                    if ((spassword.length()) >= 8)
                                    {
                                        emp.password[b] = spassword;
                                        pass = 0;
                                    }
                                    else
                                    {
                                        cout << '\n'
                                             << "Your password must be at least 8 characters long!" << '\n';
                                    }
                                }
                            }
                            cout << '\n'
                                 << "pleas insert your email: ";
                            getline(cin, emp.email[b]);
                            cout << '\n'
                                 << "pleas insert your email password: ";
                            getline(cin, emp.emailpassword[b]);
                            cout << '\n'
                                 << "pleas insert your phone number: ";
                            getline(cin, emp.phonenumber[b]);
                            cout << '\n'
                                 << "pleas insert your favorit food: ";
                            getline(cin, emp.favoritfood[b]);
                            cout << '\n'
                                 << "*your information succesfuly saved*";
                            cin.get();
                        }
                        else if (menu == 2)
                        {
                            system("clear");
                            string user;
                            int isuser = 0, iuser;
                            cout << "Who do you want to delete? ";
                            getline(cin, user);
                            for (int i = 0; i <= b; i++)
                            {
                                if (user == emp.username[i])
                                {
                                    isuser = 1;
                                    iuser = i;
                                    i = b + 1;
                                }
                            }
                            if (isuser)
                            {
                                emp.firstname[iuser] = "";
                                emp.lastname[iuser] = "";
                                emp.username[iuser] = "";
                                emp.password[iuser] = "";
                                emp.email[iuser] = "";
                                emp.emailpassword[iuser] = "";
                                emp.phonenumber[iuser] = "";
                                emp.favoritfood[iuser] = "";
                                for (int j = iuser; j <= b; j++)
                                {
                                    emp.firstname[j] = emp.firstname[j + 1];
                                    emp.lastname[j] = emp.lastname[j + 1];
                                    emp.username[j] = emp.username[j + 1];
                                    emp.password[j] = emp.password[j + 1];
                                    emp.email[j] = emp.email[j + 1];
                                    emp.emailpassword[j] = emp.emailpassword[j + 1];
                                    emp.phonenumber[j] = emp.phonenumber[j + 1];
                                    emp.favoritfood[j] = emp.favoritfood[j + 1];
                                }
                                cout << "* user succefully deleted *" << '\n';
                            }
                            else
                            {
                                cout << "user not found!" << '\n';
                            }
                            system("pause");
                        }
                        else if (menu == 3)
                        {
                            system("clear");
                            string ch, pasokh;
                            int isuser = 0, iuser;
                            cout << "Who do you want to chang information? ";
                            getline(cin, ch);
                            for (int i = 0; i <= b; i++)
                            {
                                if (ch == emp.username[i])
                                {
                                    isuser = 1;
                                    iuser = i;
                                    i = b + 1;
                                }
                            }
                            int notsix = 1;
                            if (isuser)
                            {
                                while (notsix)
                                {
                                    system("clear");
                                    int p = 0, ip = 0, random2, p2 = 1;
                                    string ran, ne, nep, npn, nff;
                                    cout << "Which field do you want to change?"
                                         << " (NOTICE: you can not change first name , last name , username) " << '\n'
                                         << '\n'
                                         << "1 - change username password" << '\n'
                                         << "2 - chane email" << '\n'
                                         << "3 - change email password" << '\n'
                                         << "4 - change phone number" << '\n'
                                         << "5 - change favorit food" << '\n'
                                         << "6 - EXIT" << '\n'
                                         << '\n'
                                         << "insert the number of menu: ";
                                    cin >> p;
                                    cin.get();
                                    if (p == 1)
                                    {
                                        int pw = 1;
                                        while (pw)
                                        {
                                            system("clear");
                                            cout << "1 - use suggestion password" << '\n'
                                                 << "2 - insert custome password" << '\n'
                                                 << "3 - EXIT" << '\n'
                                                 << '\n'
                                                 << "insert the number of menu: ";
                                            cin >> ip;
                                            cin.get();
                                            if (ip == 1)
                                            {
                                                system("clear");
                                                ran = "";
                                                srand(time(0));
                                                cout << "your last password is: " << emp.password[iuser] << '\n';
                                                for (int i = 0; i < 6; i++)
                                                {
                                                    random2 = rand() % 10;
                                                    ran += to_string(random2);
                                                }
                                                ran += "FN";
                                                // system("clear");
                                                cout << "suggestion password is: " << ran << '\n'
                                                     << "Do you want to use these password (y/n) : ";
                                                getline(cin, pasokh);
                                                if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                                {
                                                    cout << "now your password is : " << ran << '\n';
                                                    emp.password[iuser] = ran;
                                                    system("pause");
                                                }
                                            }
                                            else if (ip == 2)
                                            {
                                                system("clear");
                                                cout << "your password at these moment: " << emp.password[iuser];
                                                ran = "";
                                                while (p2)
                                                {
                                                    cout << '\n'
                                                         << "insert your password: ";
                                                    getline(cin, ran);
                                                    if ((ran.length()) >= 8)
                                                    {
                                                        system("clear");
                                                        cout << '\n'
                                                             << "*your password successfuly change*" << '\n';
                                                        emp.password[iuser] = ran;
                                                        p2 = 0;
                                                        system("pause");
                                                    }
                                                    else
                                                    {
                                                        cout << '\n'
                                                             << "Your password must be at least 8 characters long!" << '\n';
                                                    }
                                                }
                                            }
                                            else if (ip == 3)
                                            {
                                                pw = 0;
                                            }
                                            else
                                            {
                                                system("clear");
                                                cout << "invalid input";
                                            }
                                        }
                                    }
                                    else if (p == 2)
                                    {
                                        system("clear");
                                        cout << "your email at these moment: " << emp.email[iuser] << '\n';
                                        cout << "insert your new email: ";
                                        getline(cin, ne);
                                        cout << '\n'
                                             << "insert your email password: ";
                                        getline(cin, nep);
                                        emp.email[iuser] = ne;
                                        emp.emailpassword[iuser] = nep;
                                        cout << '\n'
                                             << "*your email successfuly change*" << '\n';
                                        system("pause");
                                    }
                                    else if (p == 3)
                                    {
                                        system("clear");
                                        cout << "your emailpassword at these moment: " << emp.emailpassword[iuser] << '\n';
                                        cout << "insert your new emailpassword: ";
                                        getline(cin, nep);
                                        emp.emailpassword[iuser] = nep;
                                        cout << '\n'
                                             << "*your emailpassword successfuly change*" << '\n';
                                        system("pause");
                                    }
                                    else if (p == 4)
                                    {
                                        system("clear");
                                        cout << "your phone number at these moment: " << emp.phonenumber[iuser] << '\n';
                                        cout << "insert your new phone number: ";
                                        getline(cin, npn);
                                        emp.phonenumber[iuser] = npn;
                                        cout << '\n'
                                             << "*your phone number successfuly change*" << '\n';
                                        system("pause");
                                    }
                                    else if (p == 5)
                                    {
                                        system("clear");
                                        cout << "your favorit food at these moment: " << emp.favoritfood[iuser] << '\n';
                                        cout << "insert your new favorit food : ";
                                        getline(cin, nff);
                                        emp.favoritfood[iuser] = nff;
                                        cout << '\n'
                                             << "*your favorit food successfuly change*" << '\n';
                                        system("pause");
                                    }
                                    else
                                    {
                                        notsix = 0;
                                    }
                                }
                            }
                            else
                            {
                                cout << "user not found!" << '\n';
                            }
                            system("pause");
                        }
                        else if (menu == 4)
                        {
                            onmanage = 0;
                        }
                    }
                }
                else if (im == 4)
                {
                    int notfour = 1;
                    while (notfour)
                    {
                        system("clear");
                        int pasokh;
                        cout << "1 - add new customer" << '\n'
                             << "2 - delete a customer" << '\n'
                             << "3 - change customer information" << '\n'
                             << "4 - EXIT" << '\n'
                             << '\n'
                             << "insert the number of menu: ";
                        cin >> pasokh;
                        cin.get();
                        if (pasokh == 1)
                        {
                            a++;
                            string password, pasokh, spassword, vorodi;
                            int username = 1, pass = 1;
                            system("clear");
                            cout << "pleas insert your first name: ";
                            getline(cin, cust.firstname[a]);
                            cout << '\n'
                                 << "pleas insert your last name: ";

                            getline(cin, cust.lastname[a]);
                            while (username)
                            {
                                int exist = 1;
                                cout << '\n'
                                     << "pleas insert your username: ";
                                getline(cin, vorodi);
                                for (int i = 0; i < a; i++)
                                {
                                    if (cust.username[i] == vorodi)
                                    {
                                        exist = 0;
                                        i = a;
                                    }
                                }
                                if (((vorodi.length()) >= 5) && exist)
                                    username = 0;
                                else
                                {
                                    if (vorodi.length() < 5)
                                        cout << '\n'
                                             << "your user name most be more than 5 character!" << '\n';
                                    if (exist == 0)
                                        cout << '\n'
                                             << "duplicate username , pleas chang it" << '\n';
                                }
                            }
                            cust.username[a] = vorodi;
                            srand(time(0));
                            for (int i = 0; i < 6; i++)
                            {
                                randomm = rand() % 10;
                                password += to_string(randomm);
                            }
                            password += "FN";
                            cout << '\n'
                                 << "suggested password:"
                                 << password;
                            cout << '\n'
                                 << '\n'
                                 << "if you want to use this for password insert y else insert n? ";
                            getline(cin, pasokh);
                            if (pasokh[0] == 'y')
                            {
                                cout << '\n'
                                     << "ok , now your password is " << password << '\n';
                                cust.password[a] = password;
                            }
                            else
                            {
                                while (pass)
                                {
                                    cout << '\n'
                                         << "ok , insert your password: ";
                                    getline(cin, spassword);
                                    if ((spassword.length()) >= 8)
                                    {
                                        cust.password[a] = spassword;
                                        pass = 0;
                                    }
                                    else
                                    {
                                        cout << '\n'
                                             << "Your password must be at least 8 characters long!" << '\n';
                                    }
                                }
                            }
                            cout << '\n'
                                 << "pleas insert your email: ";
                            getline(cin, cust.email[a]);
                            cout << '\n'
                                 << "pleas insert your email password: ";
                            getline(cin, cust.emailpassword[a]);
                            cout << '\n'
                                 << "pleas insert your phone number: ";
                            getline(cin, cust.phonenumber[a]);
                            cout << '\n'
                                 << "pleas insert your favorit food: ";
                            getline(cin, cust.favoritfood[a]);
                            cout << '\n'
                                 << "*your information succesfuly saved*";
                            cin.get();
                        }
                        else if (pasokh == 2)
                        {
                            system("clear");
                            string user;
                            int isuser = 0, iuser;
                            cout << "Who do you want to delete? ";
                            getline(cin, user);
                            for (int i = 0; i <= a; i++)
                            {
                                if (user == cust.username[i])
                                {
                                    isuser = 1;
                                    iuser = i;
                                    i = a + 1;
                                }
                            }
                            if (isuser)
                            {
                                cust.firstname[iuser] = "";
                                cust.lastname[iuser] = "";
                                cust.username[iuser] = "";
                                cust.password[iuser] = "";
                                cust.email[iuser] = "";
                                cust.emailpassword[iuser] = "";
                                cust.phonenumber[iuser] = "";
                                cust.favoritfood[iuser] = "";
                                for (int j = iuser; j <= a; j++)
                                {
                                    cust.firstname[j] = cust.firstname[j + 1];
                                    cust.lastname[j] = cust.lastname[j + 1];
                                    cust.username[j] = cust.username[j + 1];
                                    cust.password[j] = cust.password[j + 1];
                                    cust.email[j] = cust.email[j + 1];
                                    cust.emailpassword[j] = cust.emailpassword[j + 1];
                                    cust.phonenumber[j] = cust.phonenumber[j + 1];
                                    cust.favoritfood[j] = cust.favoritfood[j + 1];
                                }
                                cout << "* user succefully deleted *" << '\n';
                            }
                            else
                            {
                                cout << "user not found!" << '\n';
                            }
                            system("pause");
                        }
                        else if (pasokh == 3)
                        {
                            system("clear");
                            string ch, pasokh;
                            int isuser = 0, iuser;
                            cout << "Who do you want to change information? ";
                            getline(cin, ch);
                            for (int i = 0; i <= b; i++)
                            {
                                if (ch == cust.username[i])
                                {
                                    isuser = 1;
                                    iuser = i;
                                    i = b + 1;
                                }
                            }
                            int notsix = 1;
                            if (isuser)
                            {
                                while (notsix)
                                {
                                    system("clear");
                                    int p = 0, ip = 0, random2, p2 = 1;
                                    string ran, ne, nep, npn, nff;
                                    cout << "Which field do you want to change?"
                                         << " (NOTICE: you can not change first name , last name , username) " << '\n'
                                         << '\n'
                                         << "1 - change username password" << '\n'
                                         << "2 - chane email" << '\n'
                                         << "3 - change email password" << '\n'
                                         << "4 - change phone number" << '\n'
                                         << "5 - change favorit food" << '\n'
                                         << "6 - EXIT" << '\n'
                                         << '\n'
                                         << "insert the number of menu: ";
                                    cin >> p;
                                    cin.get();
                                    if (p == 1)
                                    {
                                        int pw = 1;
                                        while (pw)
                                        {
                                            system("clear");
                                            cout << "1 - use suggestion password" << '\n'
                                                 << "2 - insert custome password" << '\n'
                                                 << "3 - EXIT" << '\n'
                                                 << '\n'
                                                 << "insert the number of menu: ";
                                            cin >> ip;
                                            cin.get();
                                            if (ip == 1)
                                            {
                                                system("clear");
                                                ran = "";
                                                srand(time(0));
                                                cout << "your last password is: " << cust.password[iuser] << '\n';
                                                for (int i = 0; i < 6; i++)
                                                {
                                                    random2 = rand() % 10;
                                                    ran += to_string(random2);
                                                }
                                                ran += "FN";
                                                // system("clear");
                                                cout << "suggestion password is: " << ran << '\n'
                                                     << "Do you want to use these password (y/n) : ";
                                                getline(cin, pasokh);
                                                if ((pasokh[0] == 'y') || (pasokh[0] == 'Y'))
                                                {
                                                    cout << "now your password is : " << ran << '\n';
                                                    cust.password[iuser] = ran;
                                                    system("pause");
                                                }
                                            }
                                            else if (ip == 2)
                                            {
                                                system("clear");
                                                cout << "your password at these moment: " << cust.password[iuser];
                                                ran = "";
                                                while (p2)
                                                {
                                                    cout << '\n'
                                                         << "insert your password: ";
                                                    getline(cin, ran);
                                                    if ((ran.length()) >= 8)
                                                    {
                                                        system("clear");
                                                        cout << '\n'
                                                             << "*your password successfuly change*" << '\n';
                                                        cust.password[iuser] = ran;
                                                        p2 = 0;
                                                        system("pause");
                                                    }
                                                    else
                                                    {
                                                        cout << '\n'
                                                             << "Your password must be at least 8 characters long!" << '\n';
                                                    }
                                                }
                                            }
                                            else if (ip == 3)
                                            {
                                                pw = 0;
                                            }
                                            else
                                            {
                                                system("clear");
                                                cout << "invalid input";
                                            }
                                        }
                                    }
                                    else if (p == 2)
                                    {
                                        system("clear");
                                        cout << "your email at these moment: " << cust.email[iuser] << '\n';
                                        cout << "insert your new email: ";
                                        getline(cin, ne);
                                        cout << '\n'
                                             << "insert your email password: ";
                                        getline(cin, nep);
                                        cust.email[iuser] = ne;
                                        cust.emailpassword[iuser] = nep;
                                        cout << '\n'
                                             << "*your email successfuly change*" << '\n';
                                        system("pause");
                                    }
                                    else if (p == 3)
                                    {
                                        system("clear");
                                        cout << "your emailpassword at these moment: " << cust.emailpassword[iuser] << '\n';
                                        cout << "insert your new emailpassword: ";
                                        getline(cin, nep);
                                        cust.emailpassword[iuser] = nep;
                                        cout << '\n'
                                             << "*your emailpassword successfuly change*" << '\n';
                                        system("pause");
                                    }
                                    else if (p == 4)
                                    {
                                        system("clear");
                                        cout << "your phone number at these moment: " << cust.phonenumber[iuser] << '\n';
                                        cout << "insert your new phone number: ";
                                        getline(cin, npn);
                                        cust.phonenumber[iuser] = npn;
                                        cout << '\n'
                                             << "*your phone number successfuly change*" << '\n';
                                        system("pause");
                                    }
                                    else if (p == 5)
                                    {
                                        system("clear");
                                        cout << "your favorit food at these moment: " << cust.favoritfood[iuser] << '\n';
                                        cout << "insert your new favorit food : ";
                                        getline(cin, nff);
                                        cust.favoritfood[iuser] = nff;
                                        cout << '\n'
                                             << "*your favorit food successfuly change*" << '\n';
                                        system("pause");
                                    }
                                    else
                                    {
                                        notsix = 0;
                                    }
                                }
                            }
                            else
                            {
                                cout << "user not found!" << '\n';
                            }
                            system("pause");
                        }
                        else if (pasokh == 4)
                        {
                            notfour = 0;
                        }
                    }
                }
                else if (im == 5)
                {
                    int ce = 0;
                    string code;
                    system("clear");
                    cout << "insert the code: ";
                    getline(cin, code);
                    for (int i = 0; i < ol; i++)
                    {
                        if (code == offercode[i])
                        {
                            ce = 1;
                            i = ol + 1;
                        }
                    }
                    if (ce)
                    {
                        cout << '\n'
                             << "offercode already is exist!" << '\n';
                    }
                    else
                    {
                        extendplus(&offercode, ol);
                        offercode[ol - 1] = code;
                        // for (int i = 0; i < ol; i++)
                        // {
                        //     cout << offercode[i] << '\n';
                        // }
                    }
                    system("pause");
                }
                else if (im == 6)
                {
                    string customer;
                    int custexist = 0, ic, is = 1, ism, ie;
                    while (is)
                    {
                        system("clear");
                        cout << "1 - search by customer username " << '\n'
                             << "2 - search by customer email address " << '\n'
                             << "3 - search by customer phonenumber " << '\n'
                             << "4 - EXIT" << '\n'
                             << '\n'
                             << "insert the number of menu: ";
                        cin >> ism;
                        cin.get();
                        if (ism == 1)
                        {
                            custexist = 0;
                            system("clear");
                            cout << "insert customer username: ";
                            getline(cin, customer);
                            for (int i = 0; i <= a; i++)
                            {
                                if (customer == cust.username[i])
                                {
                                    custexist = 1;
                                    ic = i;
                                    i = a + 1;
                                }
                            }
                            if (custexist)
                            {
                                for (int i = 0; i < fct[ic].scounter; i++)
                                {
                                    cout << "food: " << fct[ic].foodname[i] << '\n'
                                         << "number: " << fct[ic].foodnumber[i] << '\n'
                                         << "The price of each food: " << fct[ic].foodprice[i] << '\n'
                                         << "The price of " << fct[ic].foodnumber[i] << ' ' << fct[ic].foodname[i] << "is: " << (fct[ic].foodnumber[i]) * (stoi(fct[ic].foodprice[i])) << '\n'
                                         << "----------------" << '\n';
                                }
                                cout << '\n'
                                     << '\n'
                                     << "Totalprice is: " << fct[ic].totalprice << '\n';
                            }
                            else
                            {
                                cout << '\n'
                                     << "user not found!" << '\n';
                            }
                            system("pause");
                        }
                        else if (ism == 2)
                        {
                            custexist = 0;
                            system("clear");
                            cout << "insert customer emailaddress: ";
                            getline(cin, customer);
                            for (int i = 0; i <= a; i++)
                            {
                                if (customer == cust.email[i])
                                {
                                    custexist = 1;
                                    ie = i;
                                    i = a + 1;
                                }
                            }
                            if (custexist)
                            {
                                for (int i = 0; i < fct[ic].scounter; i++)
                                {
                                    cout << "food: " << fct[ic].foodname[i] << '\n'
                                         << "number: " << fct[ic].foodnumber[i] << '\n'
                                         << "The price of each food: " << fct[ic].foodprice[i] << '\n'
                                         << "The price of " << fct[ic].foodnumber[i] << ' ' << fct[ic].foodname[i] << "is: " << (fct[ic].foodnumber[i]) * (stoi(fct[ic].foodprice[i])) << '\n'
                                         << "----------------" << '\n';
                                }
                                cout << '\n'
                                     << '\n'
                                     << "Totalprice is: " << fct[ic].totalprice << '\n';
                            }
                            else
                            {
                                cout << '\n'
                                     << "user not found!" << '\n';
                            }
                            system("pause");
                        }
                        else if (ism == 3)
                        {
                            custexist = 0;
                            system("clear");
                            cout << "insert customer phonenumber: ";
                            getline(cin, customer);
                            for (int i = 0; i <= a; i++)
                            {
                                if (customer == cust.phonenumber[i])
                                {
                                    custexist = 1;
                                    ie = i;
                                    i = a + 1;
                                }
                            }
                            if (custexist)
                            {
                                for (int i = 0; i < fct[ic].scounter; i++)
                                {
                                    cout << "food: " << fct[ic].foodname[i] << '\n'
                                         << "number: " << fct[ic].foodnumber[i] << '\n'
                                         << "The price of each food: " << fct[ic].foodprice[i] << '\n'
                                         << "The price of " << fct[ic].foodnumber[i] << ' ' << fct[ic].foodname[i] << "is: " << (fct[ic].foodnumber[i]) * (stoi(fct[ic].foodprice[i])) << '\n'
                                         << "----------------" << '\n';
                                }
                                cout << '\n'
                                     << '\n'
                                     << "Totalprice is: " << fct[ic].totalprice << '\n';
                            }
                            else
                            {
                                cout << '\n'
                                     << "user not found!" << '\n';
                            }
                            system("pause");
                        }
                        else if (ism == 4)
                        {
                            is = 0;
                        }
                    }
                }
                else if (im == 7)
                {
                    manager = 0;
                }
            }
        }
        else if (nom == 5)
        {
            flag = 0;
        }
    }
    delete[] offercode;
    return 0;
}
