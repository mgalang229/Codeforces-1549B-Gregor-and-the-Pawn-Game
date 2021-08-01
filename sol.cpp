#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string enemy;
		cin >> enemy;
		string player;
		cin >> player;
		int move = 0;
		for (int i = 0; i < n; i++) {
			// check if there is an enemy pawn in front of the player pawn
			if (player[i] == '1') {
				// if yes, then check if there are enemy pawns in the left or right side of it
				if (enemy[i] == '1') {
					if (i - 1 >= 0 && enemy[i - 1] == '1') {
						// if there is an enemy pawn on the left side, then take it
						enemy[i - 1] = '0';
						// increment 'move'
						move++;
					} else if (i + 1 < n && enemy[i + 1] == '1') {
						// if there is an enemy pawn on the right side, then take it
						enemy[i + 1] = '0';
						// increment 'move'
						move++;
					}
				} else {
					// if no, then simply increment 'move' (the pawn will proceed)
					move++;
				}
			}
		}
		cout << move << '\n';
	}
	return 0;
}
