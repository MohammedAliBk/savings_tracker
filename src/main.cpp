#include <iostream>
using namespace std;

int target_saving = 0;
double day_target = 0;

// to get the target savings from the user
void get_target_savings(int &target_saving)
{

    cout << "Enter the target savings : ";
    cin >> target_saving;
}
// calclate the avrage per day.
double calc_avg(int &target , double &day_target)
{
    double avg = target / 30;
    day_target = avg;
    return avg;
}

// to add a deposite 
void add_deposite(int deposite , double &day_target){
   
    cout<<"Enter the deposite amount: ";
    cin >> deposite;
    day_target -= deposite;
    cout << "successfully added deposite of " << deposite << endl;
} 


void print_today_target(double &day_target)
{
    cout << "your today savings are: " << day_target << endl;
}

//void get_prosess_from_user();


int main()
{

    get_target_savings(target_saving);
    cout << "your avg of the day is: " << calc_avg(target_saving , day_target) << endl;
    add_deposite(0, day_target);
    print_today_target(day_target);
    return 0;
}
