#include <iostream>

struct Window {
	int height;
	int width;
	int count;
};

bool checkIfFits(Window window, int placeHeight, int placeWidth) {
	bool heightFits = (placeHeight % window.height == 0);
	bool widthFits = (placeWidth % window.width == 0);
	bool hasCount = window.count >= (placeWidth / window.width) * (placeHeight / window.height);
	return heightFits && widthFits && hasCount;
}

int checkIfFits(Window* windows, int size, int placeHeight, int placeWidth) {
	for (int i = 0; i < size; i++) {
		if (checkIfFits(windows[i], placeHeight, placeWidth)) {
			return i;
		}
	}
	return -1;
}

void solveWindows() {
	const int size = 3;
	Window windows[size];
	windows[0].height = 40;
	windows[0].width = 10;
	windows[0].count = 24;
	windows[1].height = 30;
	windows[1].width = 60;
	windows[1].count = 6;
	windows[2].height = 40;
	windows[2].width = 10;
	windows[2].count = 24;
	
	const int placeHeight = 80;
	const int placeWidth = 120;

	std::cout << checkIfFits(windows, size, placeHeight, placeWidth) << '\n';
}

int main() {
    solveWindows();
}
