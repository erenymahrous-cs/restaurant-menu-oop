#include <iostream>
#include <iomanip>

using namespace std;
struct menu
{
    string name;
    string description;
    double price;
};
class Sandwich
{
  private:
    menu chiken[3];
    menu beef[3];
  public:
      ~Sandwich()
      {
          cout<<"\n\n"<<"Your order will be available during 1 hour\n";
          cout<<setw(65)<<"Thank You";
      }
    void set_Chicken_Sandwich()
    {
    chiken[0].name="1- Chicken Crispy ";
    chiken[0].description="Marinated chicken breasts with delicious cheese slices, lettuce and mayonnaise.";
    chiken[0].price=75;
    chiken[1].name="2- Zinger ";
    chiken[1].description="Very spicy marinated chicken breasts with delicious cheese slices, lettuce and mayonnaise.";
    chiken[1].price=80;
    chiken[2].name="3- Mixicano ";
    chiken[2].description="Grilled chicken slices with delicious cheese slices, lettuce and special mixicano sauce.";
    chiken[2].price=100;
    chiken[3].name="4- Chicken salad ";
    chiken[3].description="chicken salad, which is typically made with cooked chicken, mayonnaise, celery, and onion.";
    chiken[3].price=90;
    }
    void set_meat_Sandwich()
    {
    beef[0].name="1- Burger ";
    beef[0].description="A burger patty with delicious cheese slices, lettuce and mayonnaise.";
    beef[0].price=60;
    beef[1].name="2- Hot Dog ";
    beef[1].description="A delicious piece of hot dog with lettuce and mayonnaise.";
    beef[1].price=55;
    beef[2].name="3- Pepperoni ";
    beef[2].description="Pepperoni pieces with delicious soy sauce and mayonnaise.";
    beef[2].price=80;
    }
    void get_Chicken_Sandwich(double &t)
    {
      cout<<setw(14)<<"Sandwich"<<setw(50)<<"description"<<setw(46)<<"Price\n\n";
      cout<<chiken[0].name<<" : "<<chiken[0].description<<setw(8)<<chiken[0].price<<"\n";
      cout<<chiken[1].name<<" : "<<chiken[1].description<<setw(5)<<chiken[1].price<<"\n";
      cout<<chiken[2].name<<" : "<<chiken[2].description<<setw(5)<<chiken[2].price<<"\n";
      cout<<chiken[3].name<<" : "<<chiken[3].description<<setw(5)<<chiken[3].price<<"\n";
      int number;
       cout<< "\nPlease enter sandwich number you want : ";
       cin>>number;
       if(number==0)
       {
           cout<<"Thank you";
       }
       else
        {
            int snumber;
               cout<< " enter number of sandwiches you want :";
               cin>>snumber;
               t=t+snumber*chiken[number-1].price;
        }
    }
    void get_meat_Sandwich(double &t)
    {
      cout<<setw(9)<<"Sandwich"<<setw(39)<<"description"<<setw(41)<<"Price\n\n";
      cout<<beef[0].name<<" : "<<beef[0].description<<setw(6)<<beef[0].price<<"\n";
      cout<<beef[1].name<<" : "<<beef[1].description<<setw(16)<<beef[1].price<<"\n";
      cout<<beef[2].name<<" : "<<beef[2].description<<setw(14)<<beef[2].price<<"\n";
      int number;
       cout<< "\nPlease enter sandwich number you want : ";
       cin>>number;
       if(number==0)
       {
           cout<<"Thank you";
       }
       else
        {
            int snumber;
               cout<< " enter number of sandwiches you want :";
               cin>>snumber;
               t=t+snumber*beef[number-1].price;
        }
   }

};
class meal
{
  private:
    menu chiken_m[5];
    menu beef_m[6];
  public:
    void set_Chicken_meal()
    {
    chiken_m[0].name="1- Crispy Box ";
    chiken_m[0].description="8 pieces of Crispy chicken with 1 large fries, coleslow, and 5 bun.";
    chiken_m[0].price=120;
    chiken_m[1].name="2- 1/4 grilled chicken ";
    chiken_m[1].description="grilled quarter chicken with rice and salad.";
    chiken_m[1].price=75;
    chiken_m[2].name="3- 1/2 grilled chicken ";
    chiken_m[2].description="grilled half chicken with rice and salad.";
    chiken_m[2].price=140;
    chiken_m[3].name="4- 1 grilled chicken ";
    chiken_m[3].description="grilled chicken with rice and salad.";
    chiken_m[3].price=200;
    chiken_m[4].name="5- Mixicano ";
    chiken_m[4].description="Grilled chicken slices with special mixicano sauce on rice,and garlic paste.";
    chiken_m[4].price=100;
    }
    void set_beef_meal()
    {
    beef_m[0].name="1- 1/4  Kabab ";
    beef_m[0].description="Quarter kilogram Kabab with rice and salad.";
    beef_m[0].price=50;
    beef_m[1].name="2- 1/2 Kabab ";
    beef_m[1].description="Half kilogram kabab with rice and salad.";
    beef_m[1].price=90;
    beef_m[2].name="3- 1 Kabab ";
    beef_m[2].description="1 kilogram kabab with rice and salad.";
    beef_m[2].price=160;
    beef_m[3].name="4- 1/4 Kofta ";
    beef_m[3].description="Quarter kilogram Kofta with 5 bun and salad.";
    beef_m[3].price=60;
    beef_m[4].name="5- 1/2 Kofta ";
    beef_m[4].description="Half kilogram Kofta with rice and salad.";
    beef_m[4].price=110;
    beef_m[5].name="6- 1 Kofta ";
    beef_m[5].description="1 kilogram Kofta with rice and salad.";
    beef_m[5].price=200;
    }
    void get_Chicken_meal(double &t)
    {
      cout<<setw(10)<<"meal"<<setw(50)<<"description"<<setw(37)<<"Price\n\n";
      cout<<chiken_m[0].name<<" : "<<chiken_m[0].description<<setw(11)<<chiken_m[0].price<<"\n";
      cout<<chiken_m[1].name<<" : "<<chiken_m[1].description<<setw(24)<<chiken_m[1].price<<"\n";
      cout<<chiken_m[2].name<<" : "<<chiken_m[2].description<<setw(28)<<chiken_m[2].price<<"\n";
      cout<<chiken_m[3].name<<" : "<<chiken_m[3].description<<setw(35)<<chiken_m[3].price<<"\n";
      cout<<chiken_m[4].name<<" : "<<chiken_m[4].description<<setw(4)<<chiken_m[4].price<<"\n";
      int number;
       cout<< "\nPlease enter meal number you want : ";
       cin>>number;
       if(number==0)
       {
           cout<<"Thank you";
       }
       else
        {
            int snumber;
               cout<< " enter number of meals you want :";
               cin>>snumber;
               t=t+snumber*chiken_m[number-1].price;
        }
    }
    void get_beef_meal(double &t)
    {
      cout<<setw(9)<<"meal"<<setw(33)<<"description"<<setw(32)<<"Price\n\n";
      cout<<beef_m[0].name<<" : "<<beef_m[0].description<<setw(11)<<beef_m[0].price<<"\n";
      cout<<beef_m[1].name<<" : "<<beef_m[1].description<<setw(15)<<beef_m[1].price<<"\n";
      cout<<beef_m[2].name<<" : "<<beef_m[2].description<<setw(20)<<beef_m[2].price<<"\n";
      cout<<beef_m[3].name<<" : "<<beef_m[3].description<<setw(11)<<beef_m[3].price<<"\n";
      cout<<beef_m[4].name<<" : "<<beef_m[4].description<<setw(16)<<beef_m[4].price<<"\n";
      cout<<beef_m[5].name<<" : "<<beef_m[5].description<<setw(21)<<beef_m[5].price<<"\n";
      int number;
       cout<< "\nPlease enter meal number you want : ";
       cin>>number;
       if(number==0)
       {
           cout<<"Thank you";
       }
       else
        {
            int snumber;
               cout<< " enter number of meals you want :";
               cin>>snumber;
               t=t+snumber*beef_m[number-1].price;
        }
    }
    void g(double t)
    {
        cout<< "the price of your order is : "<<t;
    }
};

int main()
{
    Sandwich sandwichh;
    meal meall;
    int a,b,c,d,e;
    double total;
    string another;
cout<<setw(80)<<"welcome in DALA3 KERSHAK restaurant \n"<<"Do you want a sandwich or a meal? \n";
cout<< "if you want to a sandwich please press 1\n" <<"if you want to a meal please press 2 \n";

cin>>a;
if(a==1)
{
     cout<<"Please press 1 if you want sandwich with chicken or 2 if you want sandwich with beef .\n" ;
          cin>>b;
     if(b==1)
     {
      sandwichh.set_Chicken_Sandwich();
      sandwichh.get_Chicken_Sandwich(total);
     }
    else if(b==2)
    {
      sandwichh.set_meat_Sandwich();
      sandwichh.get_meat_Sandwich(total);
    }
}
else if(a==2)
{
     cout<<"Please press 1 if you want a meal with chicken or 2 if you want meal with beef .\n" ;
     cin>>c;
     if(c==1)
     {
       meall.set_Chicken_meal();
      meall.get_Chicken_meal(total);
     }
    else if(c==2)
    {
     meall.set_beef_meal();
     meall.get_beef_meal(total);}
}

cout << "do you want another order? ";
cin >> another;
while(another == "YES" || another == "Yes" || another == "yes")
{
    cout << "if you want a sandwich please press 1\n" << "if you want a meal please press 2 \n";
    cin >> a;
    if (a == 1)
    {
        cout << "Please press 1 if you want a sandwich with chicken or 2 if you want a sandwich with beef.\n";
        cin >> b;
        if (b == 1)
        {
            sandwichh.set_Chicken_Sandwich();
            sandwichh.get_Chicken_Sandwich(total);
        }
        else if (b == 2)
        {
            sandwichh.set_meat_Sandwich();
            sandwichh.get_meat_Sandwich(total);
        }
    }
    else if (a == 2)
    {
        cout << "Please press 1 if you want a meal with chicken or 2 if you want a meal with beef.\n";
        cin >> c;
        if (c == 1)
        {
            meall.set_Chicken_meal();
            meall.get_Chicken_meal(total);
        }
        else if (c == 2)
        {
            meall.set_beef_meal();
            meall.get_beef_meal(total);
        }
    }
    cout << "do you want another order? ";
    cin >> another;
}

    meall.g(total);
}


