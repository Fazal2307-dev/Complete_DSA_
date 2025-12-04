#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int width = 90;
    const int height = 24;
    
    // Ellipse parameters (center and radii)
    double centerX = width / 2.0;
    double centerY = height / 2.0;
    double radiusX = 30.0;
    double radiusY = 9.0;
    
    string text = "F >";
    int textStartX = (width - text.length()) / 2;
    int textY = height / 2;
    
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            // Calculate normalized distance from center using ellipse equation
            double dx = (x - centerX) / radiusX;
            double dy = (y - centerY) / radiusY;
            double distance = dx * dx + dy * dy;
            
            // Check if we should print text at this position
            if (y == textY && x >= textStartX && x < textStartX + (int)text.length()) {
                cout << text[x - textStartX];
            }
            // If inside ellipse, print space; otherwise print dot pattern
            else if (distance < 1.0) {
                cout << " ";
            } else {
                // Create dot pattern: "::" followed by a space, repeating
                int pos = x % 3;
                if (pos == 0 || pos == 1) {
                    cout << ":";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}