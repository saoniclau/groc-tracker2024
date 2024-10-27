/*
Nicholas DaRosa
SNHU
CS 210*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class GroceryStore {

private:
	//create a dictionary of items in the store and their frequency
	//key is the item name, value is the frequency of the item
	map<string, int> itemInventory;

	string inFileName = "groceryFile.txt";
	string outFileName = "frequency.dat";

public:
	//take in a file name and read the file to populate values in map
	void readInFile() {
		ifstream inFile(inFileName);
		if (!inFile) {
			cout << "Error opening file" << endl;
			exit(1);
		}
		string item;
		while (inFile >> item) {
			if (itemInventory.find(item) != itemInventory.end()) {
				itemInventory[item]++;
			}
			else {
				itemInventory[item] = 1;
			}
		}
		inFile.close();
	}
	void writeOutFile() {
		ofstream outFile(outFileName);
		if (!outFile) {
			cout << "Error opening file" << endl;
			exit(1);
		}
		for (const auto& item : itemInventory) {
			outFile << item.first << " " << item.second << endl;
		}
		outFile.close();
	}
	// search for an item in the dictionary. print out the frequency of the item
	void searchItem(string item) {
		if (itemInventory.find(item) != itemInventory.end()) {
			cout << "The frequency of " << item << " is " << itemInventory[item] << endl;
		}
		else {
			cout << "Item not found" << endl;
		}
		cout << endl;
	}
	// print out the items and their frequency
	void printItems() {
		for (auto item = itemInventory.begin(); item != itemInventory.end(); ++item) {
			cout << item->first << " " << item->second << endl;
		}
	cout << endl;
	}
	
	// print Histogram with "*" as the frequency
	void printHistogram() {
		char frequencyChar;
		cout << "How would you like to represent the frequency of the items? Type a character: ";
		cin >> frequencyChar;
		cout << endl;
		for (const auto& item : itemInventory) {
			cout << item.first << " ";
			for (int i = 0; i < item.second; i++) {
				cout << frequencyChar;
			}
			cout << endl;
		}
		cout << endl;
	}

};


int main()
{
	GroceryStore inventoryList;
	inventoryList.readInFile();
	inventoryList.writeOutFile();

	int choice;
	string item;
	do{
	
	cout << "1. Search for an item" << endl;
	cout << "2. Print items" << endl;
	cout << "3. Print histogram" << endl;
	cout << "4. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	cout << endl;
	
	switch(choice) {
		case 1:
			
			cout << "Enter the item you want to search: ";
			cin >> item;
			inventoryList.searchItem(item);
			break;
		case 2:
			inventoryList.printItems();
			break;
		case 3:
			inventoryList.printHistogram();
			break;
		case 4:
			break;
		default:
			cout << "Invalid choice" << endl;
	}
	}while(choice != 4);
	return 0;
}