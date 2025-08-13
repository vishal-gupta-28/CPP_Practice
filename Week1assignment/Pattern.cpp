#include <iostream>
#include <string>
using namespace std;

int main() {
    int totalRows; 
    if (!(cin >> totalRows)) {
        cout << "This input is not valid. Please enter a valid positive integer.\n";
        return 0;
    }

    if (totalRows <= 0) {
        cout << "This input is not valid. Please enter a valid positive integer.\n";
        return 0;
    }

    for (int currentRow = 1; currentRow <= totalRows; ++currentRow) {
        int patternWidth = min(currentRow, totalRows - currentRow + 1);

        for (int leftIndex = 1; leftIndex <= patternWidth; ++leftIndex) {
            cout << (leftIndex % 2 ? '1' : '0');
            if (leftIndex < patternWidth) cout << ' ';
        }

        int gapCount = totalRows - 2 * patternWidth + 1;
        if (gapCount > 0) {
            cout << string(2 * gapCount - 1, ' ');
        }

        int rightStartIndex = (gapCount == 0 ? 2 : 1);
        bool isFirstRightPrinted = true;

        for (int rightIndex = rightStartIndex; rightIndex <= patternWidth; ++rightIndex) {
            if (!(gapCount > 0 && isFirstRightPrinted)) cout << ' ';
            cout << (rightIndex % 2 ? '1' : '0');
            isFirstRightPrinted = false;
        }

        cout << '\n';
    }
    return 0;
}
