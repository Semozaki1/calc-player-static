#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisPlayState(string user_name, int kills, int deaths, float Accuracy_Percentage, float KDR) {
	cout << "===================================" << "\n"
		<< "           Player State            " << "\n"
		<< "===================================" << "\n"
		<< "Players Name: " << user_name << "\n"
		<< "Kills: " << kills << "\n"
		<< "Deaths: " << deaths << "\n"
		<< "Accuracy: " << fixed << setprecision(2) << Accuracy_Percentage << "\n"
		<< "KDR: " << KDR << endl;
}
int main() {
	string user_name;
	int kills;
	int deaths;
	float Accuracy_Percentage;
	int NewKills;
	int NewDeaths;
	int Finalscores;
	float KDR;
	cout << "Enter the Player's Name: ";
	getline(cin, user_name);
	cout << "Enter the number of kills: ";
	cin >> kills;
	cout << "Enter the number of deaths: ";
	cin >> deaths;
	cout << "Enter the Accuracy Percentage: ";
	cin >> Accuracy_Percentage;
	NewKills = kills++ * 2;
	NewDeaths = --deaths + 5;
	Finalscores = NewKills + NewDeaths;
	KDR = static_cast<float>(kills) / deaths;
	DisPlayState(user_name, kills, deaths, Accuracy_Percentage, KDR);
	return 0;
}