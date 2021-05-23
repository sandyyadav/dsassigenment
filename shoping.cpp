#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdio.h>
#include<cstdio>
using namespace std;
int sign_in_flag=0;
int gtype_flag=0;//0 for men and 1 for women
int ctype_flag=0;//0 for clothes and 1 for footwear
int dtype_flag=0;//0 for  disscounted and 1 for non diss counted;
int idincreementer=360;
int price=350;
int disscount1=5;
int disscount2=10;
int disscount3=0;
int gst1=5;
int gst2=18;
int cartisempty=0;
string Name,Mobile;
class item
{
public:
    int choice_type;
    void additem_in_file(int id,string item_name,int type,int price,int g_type1,int item_type)
    {
        fstream f_m_diss_clothes,f_m_nondiss_clothes,f_w_diss_clothes,f_w_nondiss_clothes,f_m_diss_footwear,f_m_nondiss_footwear,f_w_diss_footwear,f_w_nondiss_footwear;
        f_m_diss_clothes.open("D:/programe/New folder/dmassignment1/add item/item for men/disscounted/clothes.txt",ios::out|ios::app);
        f_m_diss_footwear.open("D:/programe/New folder/dmassignment1/add item/item for men/disscounted/footwear.txt",ios::out|ios::app);
        f_m_nondiss_clothes.open("D:/programe/New folder/dmassignment1/add item/item for men/non disscounted/clothes.txt",ios::out|ios::app);
        f_m_nondiss_footwear.open("D:/programe/New folder/dmassignment1/add item/item for men/non disscounted/footwear.txt",ios::out|ios::app);
        f_w_diss_clothes.open("D:/programe/New folder/dmassignment1/add item/item for women/disscounted/clothes.txt",ios::out|ios::app);
        f_w_nondiss_clothes.open("D:/programe/New folder/dmassignment1/add item/item for women/non disscounted/clothes.txt",ios::out|ios::app);
        f_w_diss_footwear.open("D:/programe/New folder/dmassignment1/add item/item for women/disscounted/footwear.txt",ios::out|ios::app);
        f_w_nondiss_footwear.open("D:/programe/New folder/dmassignment1/add item/item for women/non disscounted/footwear.txt",ios::out|ios::app);

        if(type==0&&g_type1==0&&item_type==0)
        {
            f_m_diss_clothes<<id<<" "<<item_name<<" "<<price;
            f_m_diss_clothes<<"\n";
        }
        else if(type==1&&g_type1==0&&item_type==0)
        {
            f_m_nondiss_clothes<<id<<" "<<item_name<<" "<<price;
            f_m_nondiss_clothes<<"\n";
        }
        else if(type==0&&g_type1==0&&item_type==1)
        {
            f_m_diss_footwear<<id<<" "<<item_name<<" "<<price;
            f_m_diss_footwear<<"\n";
        }
        else if(type==1&&g_type1==0&&item_type==1)
        {
             f_m_nondiss_footwear<<id<<" "<<item_name<<" "<<price;
             f_m_nondiss_footwear<<"\n";
        }
        else if(type==0&&g_type1==1&&item_type==0)
        {
            f_w_diss_clothes<<id<<" "<<item_name<<" "<<price;
            f_w_diss_clothes<<"\n";
        }
        else if(type==1&&g_type1==1&&item_type==0)
        {
            f_w_nondiss_clothes<<id<<" "<<item_name<<" "<<price;
            f_w_nondiss_clothes<<"\n";
        }
        else if(type==0&&g_type1==1&&item_type==1)
        {
            f_w_diss_footwear<<id<<" "<<item_name<<" "<<price;
            f_w_diss_footwear<<"\n";
        }
        else if(type==1&&g_type1==1&&item_type==1)
        {
             f_w_nondiss_footwear<<id<<" "<<item_name<<" "<<price;
             f_w_nondiss_footwear<<"\n";
        }
        f_m_diss_clothes.close();
        f_m_nondiss_clothes.close();
        f_w_diss_clothes.close();
        f_w_nondiss_clothes.close();
        f_m_diss_footwear.close();
        f_m_nondiss_footwear.close();
        f_w_diss_footwear.close();
        f_w_nondiss_footwear.close();

    }
    void add_item()
    {
        //for men diss counted clothes
        additem_in_file(++idincreementer,"shirt01",0,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt02",0,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt03",0,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt04",0,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt05",0,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt06",0,price+=10,0,0);
        // for men non diss counted clothes
        additem_in_file(++idincreementer,"shirt01",1,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt02",1,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt03",1,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt04",1,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt05",1,price+=10,0,0);
        additem_in_file(++idincreementer,"shirt06",1,price+=10,0,0);
        //for men diss counted footwear
        additem_in_file(++idincreementer,"boot01",0,price+=10,0,1);
        additem_in_file(++idincreementer,"boot02",0,price+=10,0,1);
        additem_in_file(++idincreementer,"boot03",0,price+=10,0,1);
        additem_in_file(++idincreementer,"boot04",0,price+=10,0,1);
        additem_in_file(++idincreementer,"boot05",0,price+=10,0,1);
        additem_in_file(++idincreementer,"boot06",0,price+=10,0,1);
        //for men non disscounted footwear

        additem_in_file(++idincreementer,"boot01",1,price+=10,0,1);
        additem_in_file(++idincreementer,"boot02",1,price+=10,0,1);
        additem_in_file(++idincreementer,"boot03",1,price+=10,0,1);
        additem_in_file(++idincreementer,"boot04",1,price+=10,0,1);
        additem_in_file(++idincreementer,"boot05",1,price+=10,0,1);
        additem_in_file(++idincreementer,"boot06",1,price+=10,0,1);
        //for women diss clothes
        additem_in_file(++idincreementer,"shirt01",0,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt02",0,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt03",0,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt04",0,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt05",0,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt06",0,price+=10,1,0);
        //for women non diss clothes
        additem_in_file(++idincreementer,"shirt01",1,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt02",1,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt03",1,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt04",1,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt05",1,price+=10,1,0);
        additem_in_file(++idincreementer,"shirt06",1,price+=10,1,0);
        //for women diss footwear
        additem_in_file(++idincreementer,"boot01",0,price+=10,1,1);
        additem_in_file(++idincreementer,"boot02",0,price+=10,1,1);
        additem_in_file(++idincreementer,"boot03",0,price+=10,1,1);
        additem_in_file(++idincreementer,"boot04",0,price+=10,1,1);
        additem_in_file(++idincreementer,"boot05",0,price+=10,1,1);
        additem_in_file(++idincreementer,"boot06",0,price+=10,1,1);
        //for women non diss footwear
        additem_in_file(++idincreementer,"boot01",1,price+=10,1,1);
        additem_in_file(++idincreementer,"boot02",1,price+=10,1,1);
        additem_in_file(++idincreementer,"boot03",1,price+=10,1,1);
        additem_in_file(++idincreementer,"boot04",1,price+=10,1,1);
        additem_in_file(++idincreementer,"boot05",1,price+=10,1,1);
        additem_in_file(++idincreementer,"boot06",1,price+=10,1,1);

    }
    void show_men_diss_clothes()
    {
        system("cls");
        string temp_id,temp_name,temp_price;
        fstream f;
        f.open("D:/programe/New folder/dmassignment1/add item/item for men/disscounted/clothes.txt",ios::in);
        f>>temp_id>>temp_name>>temp_price;
        int price;
        price=stoi(temp_price);
        cout<<"\n"<<"item name\t"<<"item id\t"<<"   item price\t"<<"   disscount\t"<<"     gst%\n";
        while(!f.eof())
        {
            if(price<500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<disscount1<<"     \t"<<gst1<<"\n";
            else if(price>500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<disscount2<<"     \t"<<gst2<<"\n";
            f>>temp_id>>temp_name>>temp_price;
        }
        f.close();
        getch();
    }
    void show_men_nondiss_clothes()
    {
        system("cls");
        string temp_id,temp_name,temp_price;
        fstream f;
        f.open("D:/programe/New folder/dmassignment1/add item/item for men/non disscounted/clothes.txt",ios::in);
        f>>temp_id>>temp_name>>temp_price;
         int price;
        price=stoi(temp_price);
        cout<<"\n"<<"item name\t"<<"item id\t"<<"   item price\t"<<"     gst%\n";
        while(!f.eof())
        {
            if(price<500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<gst1<<"\n";
            else if(price>500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<gst2<<"\n";
            f>>temp_id>>temp_name>>temp_price;
        }
        f.close();
        getch();
    }
     void show_men_diss_footwear()
    {
        system("cls");
        string temp_id,temp_name,temp_price;
        fstream f;
        f.open("D:/programe/New folder/dmassignment1/add item/item for men/disscounted/footwear.txt",ios::in);
        f>>temp_id>>temp_name>>temp_price;
        int price;
        price=stoi(temp_price);
        cout<<"\n"<<"item name\t"<<"item id\t"<<"   item price\t"<<"   disscount\t"<<"     gst%\n";
        while(!f.eof())
        {
            if(price<500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<disscount1<<"     \t"<<gst1<<"\n";
            else if(price>500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<disscount2<<"     \t"<<gst2<<"\n";
            f>>temp_id>>temp_name>>temp_price;
        }
        f.close();
        getch();
    }
    void show_men_nondiss_footwear()
    {
        system("cls");
        string temp_id,temp_name,temp_price;
        fstream f;
        f.open("D:/programe/New folder/dmassignment1/add item/item for men/non disscounted/footwear.txt",ios::in);
        f>>temp_id>>temp_name>>temp_price;
          int price;
        price=stoi(temp_price);
        cout<<"\n"<<"item name\t"<<"item id\t"<<"   item price\t"<<"     gst%\n";
        while(!f.eof())
        {
            if(price<500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<gst1<<"\n";
            else if(price>500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<gst2<<"\n";
            f>>temp_id>>temp_name>>temp_price;
        }
        f.close();
        getch();
    }
     void show_women_diss_clothes()
    {
        system("cls");
        string temp_id,temp_name,temp_price;
        fstream f;
        f.open("D:/programe/New folder/dmassignment1/add item/item for women/disscounted/clothes.txt",ios::in);
        f>>temp_id>>temp_name>>temp_price;
         int price;
        price=stoi(temp_price);
        cout<<"\n"<<"item name\t"<<"item id\t"<<"   item price\t"<<"   disscount\t"<<"     gst%\n";
        while(!f.eof())
        {
            if(price<500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<disscount1<<"     \t"<<gst1<<"\n";
            else if(price>500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<disscount2<<"     \t"<<gst2<<"\n";
            f>>temp_id>>temp_name>>temp_price;
        }
        f.close();
        getch();
    }
       void show_women_non_diss_clothes()
    {
        system("cls");
        string temp_id,temp_name,temp_price;
        fstream f;
        f.open("D:/programe/New folder/dmassignment1/add item/item for women/non disscounted/clothes.txt",ios::in);
        f>>temp_id>>temp_name>>temp_price;
         int price;
        price=stoi(temp_price);
        cout<<"\n"<<"item name\t"<<"item id\t"<<"   item price\t"<<"     gst%\n";
        while(!f.eof())
        {
            if(price<500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<gst1<<"\n";
            else if(price>500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<gst2<<"\n";
            f>>temp_id>>temp_name>>temp_price;
        }
        f.close();
        getch();
    }
       void show_women_diss_footwear()
    {
        system("cls");
        string temp_id,temp_name,temp_price;
        fstream f;
        f.open("D:/programe/New folder/dmassignment1/add item/item for women/disscounted/footwear.txt",ios::in);
        f>>temp_id>>temp_name>>temp_price;
          int price;
          price=stoi(temp_price);
        cout<<"\n"<<"item name\t"<<"item id\t"<<"   item price\t"<<"   disscount\t"<<"     gst%\n";
        while(!f.eof())
        {
            if(price<500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<disscount1<<"     \t"<<gst1<<"\n";
            else if(price>500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<disscount2<<"     \t"<<gst2<<"\n";
            f>>temp_id>>temp_name>>temp_price;
        }
        f.close();
        getch();
    }
      void show_women_nondiss_footwear()
    {
        system("cls");
        string temp_id,temp_name,temp_price;
        fstream f;
        f.open("D:/programe/New folder/dmassignment1/add item/item for women/non disscounted/footwear.txt",ios::in);
        f>>temp_id>>temp_name>>temp_price;
          int price;
         price=stoi(temp_price);
        cout<<"\n"<<"item name\t"<<"item id\t"<<"   item price\t"<<"     gst%\n";
        while(!f.eof())
        {
            if(price<500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<gst1<<"\n";
            else if(price>500)
            cout<<temp_name<<"     \t"<<temp_id<<"      \t"<<temp_price<<"      \t"<<gst2<<"\n";
            f>>temp_id>>temp_name>>temp_price;
        }
        f.close();
        getch();
    }


};
class signup
{
public:
    string name,dob,address,pass;
    long long int mobileno;
    signup()
    {
        mobileno=0;
    }
    void getdata()
    {
       cout<<"enter name:\t";
       getchar();
       getline(cin,name);
       cout<<"enter address:\t";
       getline(cin,address);
       cout<<"\nenter dob:\t";
       getline(cin,dob);
       cout<<"\nenter password\t";
       getline(cin,pass);
       cout<<"\nenter mobile no:\t";
       cin>>mobileno;
    }
    void showdata()
    {
        string temp_name,temp_address,temp_pass,temp_dob,temp_mob;
        fstream f,f1;
         f.open("D:/programe/New folder/dmassignment1/data/authentication.txt",ios::in);
        f1.open("D:/programe/New folder/dmassignment1/data/info.txt",ios::in);
        f>>temp_mob>>temp_pass;
        f1>>temp_name>>temp_address>>temp_dob;
        cout<<"\nname\t"<<"\taddress\t"<<"\tdob\t"<<"\tmobileno\t"<<"\n";
        while(!f.eof())
        {
        cout<<temp_name<<"\t      "<<temp_address<<"\t     "<<temp_dob<<"\t         "<<temp_mob<<"\n";
         f>>temp_mob>>temp_pass;
        f1>>temp_name>>temp_address>>temp_dob;
        }
        f.close();
        f1.close();
        getch();
    }
    void storedatainfile()
    {
        fstream f,f1;
        f.open("D:/programe/New folder/dmassignment1/data/authentication.txt",ios::out|ios::app);
        f1.open("D:/programe/New folder/dmassignment1/data/info.txt",ios::out|ios::app);
        f<<mobileno<<" "<<pass;
        f<<"\n";
        f1<<name<<" "<<address<<" "<<dob;
        f1<<"\n";
        f.close();
        f1.close();
    }
    void signin()
    {
        string temp_name,temp_address,temp_pass,temp_dob,temp_mob;
        fstream f,f1;
         f.open("D:/programe/New folder/dmassignment1/data/authentication.txt",ios::in);
        f1.open("D:/programe/New folder/dmassignment1/data/info.txt",ios::in);
       long long int mobileno1;
       string password;
       cout<<"\nenter your  mobile no.:\t";
       cin>>mobileno1;
       cout<<"\nenter your password:\t";
       cin.ignore();
       getline(cin,password);
        f>>temp_mob>>temp_pass;
        f1>>temp_name;
       while(!f.eof())
       {
           if(temp_mob==to_string(mobileno1)&&password==temp_pass)
           {
               Mobile=temp_mob;
               Name=temp_name;
               cout<<"\n log in succesful\n";
               getch();
               getch();
                sign_in_flag+=1;
           }
           f>>temp_mob>>temp_pass;
           f1>>temp_name;
       }
       if(sign_in_flag==0)
       {
           cout<<"\nlogin failed\n";
       }
    }

};
class addtocart
{
public:
    int additemtocartfile()
    {
        char ch='y';
        int totalprice=0;
        string temp_id,temp_name,temp_price;
        while(ch=='y')
        {
        fstream f_m_diss_clothes,f_m_nondiss_clothes,f_w_diss_clothes,f_w_nondiss_clothes,f_m_diss_footwear,f_m_nondiss_footwear,f_w_diss_footwear,f_w_nondiss_footwear;
        if(gtype_flag==0&&dtype_flag==0&&ctype_flag==0)
        {

            f_m_diss_clothes.open("D:/programe/New folder/dmassignment1/add item/item for men/disscounted/clothes.txt",ios::in);
            int id_user;
            cout<<"\nenter id to add in cart";
            cin>>id_user;
            f_m_diss_clothes>>temp_id>>temp_name>>temp_price;
            cout<<"\n id from file\t"<<temp_id;
            cout<<"\n price from file\t"<<temp_price;
            while(!f_m_diss_clothes.eof())
            {
              int   price=stoi(temp_price);
               int     id_file=stoi(temp_id);
                 if(id_file==id_user)
                 {
                     cartisempty++;
                     fstream f;
                    f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::out|ios::app);
                     if(price<500)
                     {
                        int netprice=0;
                        netprice=(price)+((price*gst1)/100)-((price*disscount1)/100);
                        totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount1<<" "<<gst1<<" "<<netprice<<"\n";
                 }
                 else if(price>500)
                 {
                     int netprice=0;
                         netprice=(price)+((price*gst2)/100)-((price*disscount2)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount2<<" "<<gst2<<" "<<netprice<<"\n";
                 }
                 f.close();
            }

            f_m_diss_clothes>>temp_id>>temp_name>>temp_price;

        }
        f_m_diss_clothes.close();
    }
    else if(gtype_flag==0&&dtype_flag==1&&ctype_flag==0)
    {

         f_m_nondiss_clothes.open("D:/programe/New folder/dmassignment1/add item/item for men/non disscounted/clothes.txt",ios::in);
            int id_user;
            cout<<"\nenter id to add in cart";
            cin>>id_user;
            f_m_nondiss_clothes>>temp_id>>temp_name>>temp_price;
            while(!f_m_nondiss_clothes.eof())
            {
               int price=stoi(temp_price);
                int id_file=stoi(temp_id);
                 if(id_file==id_user)
                 {
                     cartisempty++;
                     fstream f;
                    f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::out|ios::app);
                     if(price<500)
                     {
                         int netprice=0;
                         netprice=((price)+((price*gst1)/100));
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount3<<" "<<gst1<<" "<<netprice<<"\n";
                 }
                 else if(price>500)
                 {
                     int netprice=0;
                         netprice=(price)+((price*gst2)/100);
                                      totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount3<<" "<<gst2<<" "<<netprice<<"\n";
                 }
                 f.close();
            }

            f_m_nondiss_clothes>>temp_id>>temp_name>>temp_price;

        }
        f_m_nondiss_clothes.close();
    }
    else if(gtype_flag==0&&dtype_flag==0&&ctype_flag==1)
    {
         f_m_diss_footwear.open("D:/programe/New folder/dmassignment1/add item/item for men/disscounted/footwear.txt",ios::in);
            int id_user,id_file,price;
            cout<<"\nenter id to add in cart";
            cin>>id_user;
            f_m_diss_footwear>>temp_id>>temp_name>>temp_price;
            while(!f_m_diss_footwear.eof())
            {
                 price=stoi(temp_price);
                 id_file=stoi(temp_id);
                 if(id_file==id_user)
                 {
                     cartisempty++;
                     fstream f;
                     f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::out|ios::app);
                     if(price<500)
                     {
                         int netprice=0;
                         netprice=(price)+((price*gst1)/100)-((price*disscount1)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount1<<" "<<gst1<<" "<<netprice<<"\n";
                 }
                 else if(price>500)
                 {
                     int netprice=0;
                         netprice=(price)+((price*gst2)/100)-((price*disscount2)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount2<<" "<<gst2<<" "<<netprice<<"\n";
                 }
                 f.close();
            }

            f_m_diss_footwear>>temp_id>>temp_name>>temp_price;

        }
        f_m_diss_footwear.close();
    }
     else if(gtype_flag==0&&dtype_flag==1&&ctype_flag==1)
    {
         f_m_nondiss_footwear.open("D:/programe/New folder/dmassignment1/add item/item for men/non disscounted/footwear.txt",ios::in);
            int id_user,id_file,price;
            cout<<"\nenter id to add in cart";
            cin>>id_user;
            f_m_nondiss_footwear>>temp_id>>temp_name>>temp_price;
            while(!f_m_nondiss_footwear.eof())
            {
                 price=stoi(temp_price);
                 id_file=stoi(temp_id);
                 if(id_file==id_user)

                   {

                     cartisempty++;
                     fstream f;
                    f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::out|ios::app);
                     if(price<500)
                     {
                         int netprice=0;
                         netprice=(price)+((price*gst1)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount3<<" "<<gst1<<" "<<netprice<<"\n";
                 }
                 else if(price>500)
                 {
                     int netprice=0;
                         netprice=(price)+((price*gst2)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount3<<" "<<gst2<<" "<<netprice<<"\n";
                 }
                 f.close();
            }

            f_m_nondiss_footwear>>temp_id>>temp_name>>temp_price;

        }
        f_m_nondiss_footwear.close();
    }
    else if(gtype_flag==1&&dtype_flag==0&&ctype_flag==0)
        {
            f_w_diss_clothes.open("D:/programe/New folder/dmassignment1/add item/item for women/disscounted/clothes.txt",ios::in);
            int id_user,id_file,price;
            cout<<"\nenter id to add in cart";
            cin>>id_user;
            f_w_diss_clothes>>temp_id>>temp_name>>temp_price;
            while(!f_w_diss_clothes.eof())
            {
                 price=stoi(temp_price);
                 id_file=stoi(temp_id);
                 if(id_file==id_user)
                 {
                     cartisempty++;
                     fstream f;
                    f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::out|ios::app);
                     if(price<500)
                     {
                        int netprice=0;
                        netprice=(price)+((price*gst1)/100)-((price*disscount1)/100);
                        totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount1<<" "<<gst1<<" "<<netprice<<"\n";
                 }
                 else if(price>500)
                 {
                     int netprice=0;
                         netprice=(price)+((price*gst2)/100)-((price*disscount2)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount2<<" "<<gst2<<" "<<netprice<<"\n";
                 }
                 f.close();
            }

            f_w_diss_clothes>>temp_id>>temp_name>>temp_price;

        }
        f_w_diss_clothes.close();
    }
     else if(gtype_flag==1&&dtype_flag==1&&ctype_flag==0)
    {
         f_w_nondiss_clothes.open("D:/programe/New folder/dmassignment1/add item/item for women/non disscounted/clothes.txt",ios::in);
            int id_user,id_file,price;
            cout<<"\nenter id to add in cart";
            cin>>id_user;
            f_m_nondiss_clothes>>temp_id>>temp_name>>temp_price;
            while(!f_w_nondiss_clothes.eof())
            {
                 price=stoi(temp_price);
                 id_file=stoi(temp_id);
                 if(id_file==id_user)
                 {
                     cartisempty++;
                     fstream f;
                     f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::out|ios::app);
                     if(price<500)
                     {
                         int netprice=0;
                         netprice=((price)+((price*gst1)/100));
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount3<<" "<<gst1<<" "<<netprice<<"\n";
                 }
                 else if(price>500)
                 {
                     int netprice=0;
                         netprice=(price)+((price*gst2)/100);
                                      totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount3<<" "<<gst2<<" "<<netprice<<"\n";
                 }
                 f.close();
            }

            f_w_nondiss_clothes>>temp_id>>temp_name>>temp_price;

        }
        f_w_nondiss_clothes.close();
    }
     else if(gtype_flag==1&&dtype_flag==0&&ctype_flag==1)
    {
         f_w_diss_footwear.open("D:/programe/New folder/dmassignment1/add item/item for women/disscounted/footwear.txt",ios::in);
            int id_user,id_file,price;
            cout<<"\nenter id to add in cart";
            cin>>id_user;
            f_w_diss_footwear>>temp_id>>temp_name>>temp_price;
            while(!f_w_diss_footwear.eof())
            {
                 price=stoi(temp_price);
                 id_file=stoi(temp_id);
                 if(id_file==id_user)
                 {
                     cartisempty++;
                     fstream f;
                     f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::out|ios::app);
                     if(price<500)
                     {
                         int netprice=0;
                         netprice=(price)+((price*gst1)/100)-((price*disscount1)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount1<<" "<<gst1<<" "<<netprice<<"\n";
                 }
                 else if(price>500)
                 {
                     int netprice=0;
                         netprice=(price)+((price*gst2)/100)-((price*disscount2)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount2<<" "<<gst2<<" "<<netprice<<"\n";
                 }
                 f.close();
            }

            f_w_diss_footwear>>temp_id>>temp_name>>temp_price;

        }
        f_w_diss_footwear.close();
    }
     else if(gtype_flag==1&&dtype_flag==1&&ctype_flag==1)
    {
         f_w_nondiss_footwear.open("D:/programe/New folder/dmassignment1/add item/item for women/non disscounted/footwear.txt",ios::in);
            int id_user,id_file,price;
            cout<<"\nenter id to add in cart";
            cin>>id_user;
            f_w_nondiss_footwear>>temp_id>>temp_name>>temp_price;
            while(!f_w_nondiss_footwear.eof())
            {
                 price=stoi(temp_price);
                 id_file=stoi(temp_id);
                 if(id_file==id_user)
                 {
                     cartisempty++;
                     fstream f;
                       f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::out|ios::app);
                     if(price<500)
                     {
                         int netprice=0;
                         netprice=(price)+((price*gst1)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount3<<" "<<gst1<<" "<<netprice<<"\n";
                 }
                 else if(price>500)
                 {
                     int netprice=0;
                         netprice=(price)+((price*gst2)/100);
                            totalprice+=netprice;
                     f<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<disscount3<<" "<<gst2<<" "<<netprice<<"\n";
                 }
                 f.close();
            }

            f_w_nondiss_footwear>>temp_id>>temp_name>>temp_price;

        }
        f_w_nondiss_footwear.close();
    }
    cout<<"\n item added to your cart successfuly";
    cout<<"\n do you want to add more item\t[y/n]";
    cin>>ch;
     if(ch=='n')
     {
         return totalprice;
     }
        }
}
int additem()
{
   int i=additemtocartfile();
   return i;
}
int deleteitemfromcart(int l)
{
    show_cart();
    int p,d,choice;
    fstream f,f1;
    string temp_name,temp_id,temp_price,temp_diss,temp_gst,temp_netprice;
    f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::in);
    f1.open("D:/programe/New folder/dmassignment1/cart/temp.txt",ios::out|ios::app);
    f>>temp_name>>temp_id>>temp_price>>temp_diss>>temp_gst>>temp_netprice;
    cout<<"\nenter id that you want to delet\t";
    cin>>choice;
    while(!f.eof())
    {
        p=stoi(temp_netprice);
        d=stoi(temp_id);
        if(d==choice)
        {
            cartisempty--;
            l=l-p;
        }
        else
        {
            f1<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<temp_diss<<" "<<temp_gst<<" "<<temp_netprice<<"\n";
        }
        f>>temp_name>>temp_id>>temp_price>>temp_diss>>temp_gst>>temp_netprice;
    }
    f.close();
    f1.close();
    // string filename="D:\\programe\\New folder\\dmassignment1\\cart\\cart"+Mobile+".txt";
    remove(("D:\\programe\\New folder\\dmassignment1\\cart\\cart"+Mobile+".txt").c_str());
    rename("D:/programe/New folder/dmassignment1/cart/temp.txt",("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt").c_str());
    return l;
}
int place_order(int r)
{
     fstream f,f1;
     string temp_name,temp_id,temp_price,temp_diss,temp_gst,temp_netprice;
     f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::in);
     f1.open("D:/programe/New folder/dmassignment1/order/order"+Mobile+".txt",ios::out|ios::app);
     f>>temp_name>>temp_id>>temp_price>>temp_diss>>temp_gst>>temp_netprice;
     while(!f.eof())
     {
        f1<<temp_name<<" "<<temp_id<<" "<<temp_price<<" "<<temp_diss<<" "<<temp_gst<<" "<<temp_netprice<<"\n";
        f>>temp_name>>temp_id>>temp_price>>temp_diss>>temp_gst>>temp_netprice;
     }
     f1<<r<<"\n";
     cout<<"\n order placed succefuly";
     remove(("D:/programe/New folder/dmassignment1/order/order"+Mobile+".txt").c_str());
     getch();
}
int show_cart()
{
    system("cls");
    int totalvalue=0;
    fstream f;
    f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::in);
    string temp_name,temp_id,temp_price,temp_diss,temp_gst,temp_netprice;
    f>>temp_name>>temp_id>>temp_price>>temp_diss>>temp_gst>>temp_netprice;
    cout<<"item id    \titem name    \tprice    \tdisscount     \tgst   \tnet price after gst\n";
    while(!f.eof())
    {
        int i=0;
        i=stoi(temp_netprice);
        totalvalue=totalvalue+i;
        cout<<temp_id<<"    \t"<<temp_name<<"   \t"<<temp_price<<"   \t"<<temp_diss<<"   \t"<<temp_gst<<"   \t"<<temp_netprice<<"\n";
        f>>temp_name>>temp_id>>temp_price>>temp_diss>>temp_gst>>temp_netprice;
    }
    f.close();
    cout<<"\n total order price=:\t "<<totalvalue;
    getch();
    return totalvalue;
}
int iscartisempty()
{
    system("cls");
    fstream f;
    f.open("D:/programe/New folder/dmassignment1/cart/cart"+Mobile+".txt",ios::in);
    if(!f)
    {
        return 0;
    }
    else{
    string temp_name,temp_id,temp_price,temp_diss,temp_gst,temp_netprice;
    f>>temp_name>>temp_id>>temp_price>>temp_diss>>temp_gst>>temp_netprice;
     while(!f.eof())
    {
        cartisempty++;
        f>>temp_name>>temp_id>>temp_price>>temp_diss>>temp_gst>>temp_netprice;
    }
    f.close();
    return 0;
    }
}
};

class menu
{
public:
    item i;
    addtocart h;



int main_menu()
{
    int orderprice=0;
    h.iscartisempty();
    while(1)
    {
    system("cls");
    cout<<"===========main menu=======\n";
    cout<<"       1.sign up           \n";
    cout<<"       2.sign in           \n";
    if(sign_in_flag==0)
    {
    cout<<"       3.profile           \n";
    }
    else if(sign_in_flag==1)
    {
         cout<<"       3.item           \n";
    }
    if(cartisempty==0&&sign_in_flag==0)
    {
    if(sign_in_flag==0)
       {
           cout<<"       4.exit           \n";
       }
    else if(sign_in_flag==1)
    {
         cout<<"       4.back            \n";
    }
    }
    else if(cartisempty!=0&sign_in_flag==1)
    {
        cout<<"       4.show cart        \n";
        cout<<"       5.exit             \n";
    }

    cout<<"===========================\n";
   int choice;
   signup s;
    cout<<"enetr your choice\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        s.getdata();
        s.storedatainfile();
        break;
    case 2:
        s.signin();break;
    case 3:
        if(sign_in_flag==0)
        {
         s.showdata(); break;
        }
       else if(sign_in_flag==1)
       {
          item_menu();
           break;
       }
    case 4:
        if(cartisempty==0)
        {
        if(sign_in_flag==0)
        {
        return 0;
        break;
        }
        else if(sign_in_flag==1)
        {
        sign_in_flag=0;
        }
        }
        else if(cartisempty!=0)
        {
           orderprice= h.show_cart();
           place_order_menu(orderprice);
        }
        break;
    case 5:
        return 0;
    }
   }

}
void item_menu()
{
    system("cls");
    cout<<"\n========item menu==========";
    cout<<"\n        1.for men          ";
    cout<<"\n        2.for women        ";
    cout<<"\n        3.back             \n";
    int choice;
    cout<<"enter your choice";
    cin>>choice;
    switch(choice)
    {
    case 1:
        gtype_flag=0;
        men_menu();break;
    case 2:
        gtype_flag=1;
        women_menu();break;
    case 3:
        sign_in_flag=0;
        main_menu();break;
    }
}
void men_menu()
{
     system("cls");
    cout<<"\n========item menu==========";
    cout<<"\n        1.for clothes      ";
    cout<<"\n        2.for footwear     ";
    cout<<"\n        3.back             ";
    int choice;
    cout<<"\nenter your choice";
    cin>>choice;
    switch(choice)
    {
    case 1:
        ctype_flag=0;
        clothes_menu_men();break;
    case 2:
        ctype_flag=1;
        footwear_menu_men();break;
    case 3:
        item_menu();break;
    }
}
void women_menu()
{
     system("cls");
    cout<<"\n========item menu==========";
    cout<<"\n        1.for clothes          ";
    cout<<"\n        2.for footwear       ";
    cout<<"\n        3.back             ";
    int choice;
     cout<<"\nenter your choice";
    cin>>choice;
    switch(choice)
    {
    case 1:
        ctype_flag=0;
        clothes_menu_women();break;
    case 2:
        ctype_flag=1;
        footwear_menu_women();break;
    case 3:
        item_menu();break;
    }
}
void clothes_menu_men()
{
     int j;

     system("cls");
    cout<<"\n========clothes menu==========";
    cout<<"\n        1.for discounted         ";
    cout<<"\n        2.for non discounted       ";
    cout<<"\n        3.back             \n";
    int choice;
    cout<<"enter your choice\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
      {
        dtype_flag=0;
        i.show_men_diss_clothes();
        j=h.additem();
        place_order_menu(j);
        break;
      }
    case 2:
        dtype_flag=1;
        i.show_men_nondiss_clothes();
        j=h.additem();
        place_order_menu(j);
        break;
    case 3:
        men_menu();
    }

}
void footwear_menu_men()
{

   system("cls");
    cout<<"\n========footwear menu==========";
    cout<<"\n        1.for discounted         ";
    cout<<"\n        2.for non discounted       ";
    cout<<"\n        3.back             \n";
     int choice,j;
    cout<<"enter your choice\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        dtype_flag=0;
        i.show_men_diss_footwear();
        j=h.additem();
        place_order_menu(j);
       break;
    case 2:
        dtype_flag=1;
        i.show_men_nondiss_footwear();
        j=h.additem();
        place_order_menu(j);
        break;
    case 3:
        men_menu();
    }
}

void clothes_menu_women()
{
     system("cls");
    cout<<"\n========clothes menu==========";
    cout<<"\n        1.for discounted         ";
    cout<<"\n        2.for non discounted       ";
    cout<<"\n        3.back             \n";
    int choice,j;
    cout<<"enter your choice\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        dtype_flag=0;
        i.show_women_diss_clothes();
        j=h.additem();
       place_order_menu(j);
       break;
    case 2:
        dtype_flag=1;
        i.show_women_non_diss_clothes();
        j=h.additem();
        place_order_menu(j);
        break;
    case 3:
        women_menu();
    }

}
void footwear_menu_women()
{
   system("cls");
    cout<<"\n========footwear menu==========";
    cout<<"\n        1.for discounted         ";
    cout<<"\n        2.for non discounted       ";
    cout<<"\n        3.back             \n";
     int choice,j;
    cout<<"enter your choice\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        dtype_flag=0;
        i.show_women_diss_footwear();
        j=h.additem();
        place_order_menu(j);
       break;
    case 2:
        dtype_flag=1;
        i.show_women_nondiss_footwear();
        j=h.additem();
        place_order_menu(j);
        break;
    case 3:
        women_menu();
    }
}
void place_order_menu(int k)
{
    system("cls");
    int choice;
    cout<<"\n========cart menu================";
    cout<<"\n        1.for place order        ";
    cout<<"\n        2.delete item from cart ";
    cout<<"\n        3.show cart              ";
    cout<<"\n        4.sign out           \n";
    cout<<"\nenter your choice\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
        h.place_order(k);
        }
        break;
    case 2:
        {
        int l=0;
       l=h.deleteitemfromcart(k);
       place_order_menu(l);
        }
        break;
    case 3:
        h.show_cart();
        break;
    case 4:
        sign_in_flag=0;
        main_menu();
    }
}

};

int main()
{
   item t;
   int i=0;
   if(i==0)
   {
        remove("D:/programe/New folder/dmassignment1/add item/item for men/disscounted/clothes.txt");
        remove("D:/programe/New folder/dmassignment1/add item/item for men/disscounted/footwear.txt");
        remove("D:/programe/New folder/dmassignment1/add item/item for men/non disscounted/clothes.txt");
        remove("D:/programe/New folder/dmassignment1/add item/item for men/non disscounted/footwear.txt");
        remove("D:/programe/New folder/dmassignment1/add item/item for women/disscounted/clothes.txt");
        remove("D:/programe/New folder/dmassignment1/add item/item for women/non disscounted/footwear.txt");
        remove("D:/programe/New folder/dmassignment1/add item/item for women/non disscounted/clothes.txt");
        remove("D:/programe/New folder/dmassignment1/add item/item for women/disscounted/footwear.txt");
        t.add_item();
   }
   signup s;
   menu m;
   m.main_menu();
   return 0;
}

