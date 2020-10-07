#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    //Code written by Camerie Mazreku
    // 1. We initially declare every variable that we will use 
    string MovieName;
    int AdultTicketsSold;
    int ChildTicketsSold;
    float grossProfit;
    float netProfit;
    float savings;
    // We create three constants as follows:
    const float TheaterPercentage = 0.195;
    const float AdultTicketPrice = 10.5;
    const float ChildTicketPrice = sqrt(AdultTicketPrice);
    //2 We ask the user to enter the name of the movie and create a condition for the number of characters.
    cout << "Name of the movie: ";
    getline(cin, MovieName);
    if (MovieName.length() < 5) {
        cout << "Movie name should consist 5 or more characters" << endl;
    }
    //3 Then, we ask for the number of Adult Tickets sold and create a condition.
    cout << "Enter the number of adult tickets sold: ";
    cin >> AdultTicketsSold;
    if (AdultTicketsSold <= 0) {
        cout << "Name of the movie:" << MovieName << endl
            << "Number of adult tickets sold: 0" << endl
            << "Number of adult tickets should be greater than 0 " << endl;
    }
    //4 We continue by asking the user for child tickects sold
    cout << "Enter the number of child tickets sold: ";
    cin >> ChildTicketsSold;
    if (ChildTicketsSold <= 0) {
        cout << "Name of the movie:Sonic the Hedgehog " << endl
            << "Number of child tickets sold: 0" << endl
            << "Number of child tickets should be greater than 0 " << endl;
    }

    //5. Compute the gross profit:
    // We compute every thing that we need here in order to use it at the end of the code where we will display these calculations.
    grossProfit = (AdultTicketPrice * AdultTicketsSold) + (ChildTicketPrice * ChildTicketsSold);
    netProfit = TheaterPercentage * grossProfit;
    savings = grossProfit - netProfit;
    grossProfit = (AdultTicketPrice * AdultTicketsSold) + (ChildTicketPrice * ChildTicketsSold);
    netProfit = TheaterPercentage * grossProfit;
    savings = grossProfit - netProfit;
    cout << "Movie Sales Report" << endl;
    cout << setfill('^') << setw(50) << "^" << endl;
    cout << setfill(' ') << setw(22) << " Movie Name:" << "\"" << MovieName << "\"" << endl
        << (' ') << setw(22) << "Adult tickets sold: " << AdultTicketsSold << endl
        << (' ') << setw(22) << "Child tickets sold: " << ChildTicketsSold << endl
        << (' ') << setw(22) << "Gross Profit: $" << setprecision(2) << scientific << grossProfit << endl
        << (' ') << setw(22) << "Net Profit: $" << netProfit << endl
        << (' ') << setw(22) << "Savings: $" << savings << endl;


    return 0;
}