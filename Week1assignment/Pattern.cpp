#include <iostream>
using namespace std;

int main() {
    int totalRows; 
    if (!(cin >> totalRows)) return 0;
    if (totalRows <= 0) return 0;

    int middleRow = (totalRows + 1) / 2; 

    for (int currentRow = 1; currentRow <= totalRows; ++currentRow) {
        
       
        int patternLength = middleRow - abs(currentRow - middleRow);
        if (patternLength < 1) patternLength = 1; 

        // Left side
        for (int leftIndex = 1; leftIndex <= patternLength; ++leftIndex) {
            cout << (leftIndex % 2 ? '1' : '0');
            if (leftIndex < patternLength) cout << ' ';
        }

        // Gap calculation
        int gapCount = totalRows - 2 * patternLength + 1;
        if (gapCount > 0) {
            cout << string(2 * gapCount - 1, ' ');
        }

        // Right side
        int rightStartIndex = (gapCount == 0 ? 2 : 1);
        bool isFirstRightElement = true;

        for (int rightIndex = rightStartIndex; rightIndex <= patternLength; ++rightIndex) {
            if (!(gapCount > 0 && isFirstRightElement)) cout << ' ';
            cout << (rightIndex % 2 ? '1' : '0');
            isFirstRightElement = false;
        }

        cout << '\n';
    }
    return 0;
}
