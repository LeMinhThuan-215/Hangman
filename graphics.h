#ifndef GRAPHICS_H
#define GRAPHICS_H

using namespace std;

void renderGame(int cnt){
    switch(cnt){
        case 0:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//            "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 1:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 2:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 3:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||             |  "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 4:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||            /|  "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 5:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||            /|\\"<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 6:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||            /|\\"<<endl;
            cout<<"  ||            /   "<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
            break;
        case 7:
            cout<<"=================== "<<endl;
            cout<<"\\\\||//           |"<<endl;
            cout<<"  ||             O  "<<endl;
            cout<<"  ||            /|\\"<<endl;
            cout<<"  ||            / \\"<<endl;
            cout<<"  ||                "<<endl;
            cout<<"  ||                "<<endl;
            cout<<" /__\\              "<<endl;
    }
}

#endif