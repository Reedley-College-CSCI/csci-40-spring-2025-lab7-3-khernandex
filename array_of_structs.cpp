#include <iostream>
#include <fstream>
using namespace std;

// TODO: Step 1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.
struct TemperatureRecord {
    int day;
    int temperature;
};

// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(TemperatureRecord array, int &size); // TODO: Fix the parameters
void printTemperatures(const ???);
TemperatureRecord findMin(const ???);
TemperatureRecord findMax(const ???);
double findAverage(const ???);

// TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)
TemperatureRecord dailyTemperatures[MAX_DAYS];

int main() {
    
    int size = 0;  // Actual number of records read

    // TODO: Step 3 - Call readTemperatures() to load data from file
    readTemperatures(dailyTemperatures[MAX_DAYS], size);

    // TODO: Step 4 - Print the temperatures

    // TODO: Step 5 - Compute and display min, max, and average temperature

    return 0;
}

/************************************************************
* TODO: Step 6 - Implement readTemperatures()               *
* Read from "temps.txt" and store data in the array         *
*                                                           *
* This function will read values from the file temps.txt    *
* into the array of TemperatureRecord structs.              *
*                                                           *
*************************************************************/
void readTemperatures(TemperatureRecord array, int &size) {
    ifstream inFile;
    inFile.open("temps.txt");
    int index = 0;

    while (index < MAX_DAYS && inFile >> dailyTemperatures[index].day >> dailyTemperatures[index].temperature) {
        ++index;
        ++size;
    }

    inFile.close();
}


// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
