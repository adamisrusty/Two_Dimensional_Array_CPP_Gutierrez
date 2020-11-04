//Student Name: Adam Gutierrez

//Teacher: Dr. Tyson McMillan

//Date: 11/01/2020

//A program to practice working with multi-dimensional arrays

#include <iostream>
#include <utility>

using namespace std;

class City {
    private:
        static const int DAYS = 7;
    public:
        string name;
        double temps[DAYS];
        void set_name(string);
        void set_temps();
};

void City::set_name(string cityName) {
    name = std::move(cityName);
}

void City::set_temps() {
    for(int day = 0; day < DAYS; day++) {
        cout << "Please enter the temperature for day " << day + 1 << " for this city: ";
        cin >> temps[day];
    }
}


int main()
{
    const int CITIES = 2;
    const int DAYS = 7;

    City grapevine;
    grapevine.set_name("Grapevine");
    cout << endl << grapevine.name << endl;
    cout << "---------" << endl;
    grapevine.set_temps();

    City pittsburgh;
    pittsburgh.set_name("Pittsburgh");
    cout << endl << pittsburgh.name << endl;
    cout << "----------" << endl;
    pittsburgh.set_temps();

    City cities[] = {grapevine, pittsburgh};
    double temperatures[CITIES][DAYS];

    for(int city = 0; city < CITIES; city++) {
        for(int day = 0; day < DAYS; day++) {
            temperatures[city][day] = cities[city].temps[day];
            cout << "On day " << day + 1 << " the temperature in " << cities[city].name << " will be ";
            cout << temperatures[city][day] << "." << endl;
        }
    }
}
