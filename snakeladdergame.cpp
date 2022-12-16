#include <bits/stdc++.h>
using namespace std;
int throw_dice(string &player, int &points)
{
    int dice_val;
    srand(time(0));
    dice_val = (rand() % 6) + 1;
    cout << player << " your point on dice is: " << dice_val << endl;
    if(points + dice_val>100)
    points=points;
    else
    points = points + dice_val;
    
    switch (points)
    {
    case 97:
        points = 27;
        cout << "Oops! snake bite\n";
        break;
    case 74:
        points = 35;
        cout << "Oops! snake bite\n";
        break;
    case 63:
        points = 17;
        cout << "Oops! snake bite\n";
        break;
    case 58:
        points = 40;
        cout << "Oops! snake bite\n";
        break;
    case 52:
        points = 11;
        cout << "Oops! snake bite\n";
        break;
    case 47:
        points = 4;
        cout << "Oops! snake bite\n";
        break;
    case 37:
        points = 7;
        cout << "Oops! snake bite\n";
        break;

    case 8:
        points = 26;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;
    case 19:
        points = 38;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;
    case 21:
        points = 82;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;
    case 28:
        points = 53;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;
    case 36:
        points = 57;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;
    case 50:
        points = 91;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;
    case 54:
        points = 88;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;
    case 61:
        points = 99;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;

    case 62:
        points = 96;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;

    case 66:
        points = 87;
        cout << "Wohoo! ladder here! Let's jump\n";
        break;
    }
    return points;
    
}
int main()
{
    int first = 0, second = 0, key, fc , sc ;
    string p1, p2;
    cout << "Enter names of players" << endl;
    cin >> p1 >> p2;
    while (first <= 100 || second <= 100)
    {
        cout << "\n\nYour turn " << p1 << " press 1\n";
        cin >> key;
        fc = throw_dice(p1, first);
        cout << "Your score: " << fc << endl;
        cout << "\nYour turn " << p2 << " press 2" << endl;
        cin >> key;
        sc = throw_dice(p2, second);
        cout << "Your score:" << sc << endl;
        first = fc;
        second = sc;
        if (fc == 100)
        {
            cout << "\nHurrah! " << p1 << " you won\n" << endl;
            break;
        }
        else if (sc == 100)
        {
            cout << "\nHurrah! " << p2 << " you won\n"<< endl;
            break;
        }
    } 
    return 0;
}