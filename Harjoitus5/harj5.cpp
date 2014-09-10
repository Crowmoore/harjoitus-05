/****IIZO1010****
Harjoitus 5
Tekij‰: Joel Kortelainen
Ryhm‰: II014S2
Kuvaus: Ohjelma pyyt‰‰ k‰ytt‰j‰lt‰ kaksi (2) lukua. Jos luvut ovat yht‰suuret, ohjelma tulostaa sanan BINGO!
Muutoin ohjelma tulostaa sanan BONGO!
Versio 1.0
P‰iv‰ys 10.9.2014
*/


#include <iostream>
using namespace std;

void main(void)

{
	int n1 = 0; // M‰‰ritell‰‰n tarvittavat muuttujat
	int n2 = 0;

	cout << "Insert number 1: "; // Pyydet‰‰n lukua 1
	cin >> n1;

	cout << "Insert number 2: "; // Pyydet‰‰n lukua 2
	cin >> n2;

	if (n1 == n2) // Tarkistetaan onko luvut yht‰suuret. Jos on, tulostetaan BINGO!
	{
		cout << "BINGO! ";
	}
	else // Muutoin tulostetaan BONGO!
	{
		cout << "BONGO! ";
	}
}