#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<bool>> friends; /// the network of friends.

    // Q1: Initialize the network. All elements are false, except for those in the diagonal
    // (members are friends with themselves)
    int numMembers = 4;
    friends.resize(numMembers, vector<bool>(numMembers, false));

    for (int i = 0; i < numMembers; ++i) {
        friends[i][i] = true;
    }

    // Q2: Display the contents of the vector
    for (int i = 0; i < numMembers; ++i) {
        cout << "Member " << i << " is friends with: ";
        for (int j = 0; j < numMembers; ++j) {
            if (friends[i][j] && i != j) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    // Q3 (optional): Display only the friends other than themselves
    cout << "\nDisplaying only friends other than themselves:\n";
    for (int i = 0; i < numMembers; ++i) {
        cout << "Member " << i << " is friends with: ";
        for (int j = 0; j < numMembers; ++j) {
            if (friends[i][j] && i != j) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    // Q4: Update the friends vector to memorize new friendships
    char continueChoice;
    do {
        int friend1, friend2;
        cout << "\nEnter two member numbers to become friends (separated by space): ";
        cin >> friend1 >> friend2;

        // Check validity of member numbers
        if (friend1 >= 0 && friend1 < numMembers && friend2 >= 0 && friend2 < numMembers) {
            friends[friend1][friend2] = true;
            friends[friend2][friend1] = true; // Since friendship is symmetric
        } else {
            cout << "Invalid member numbers. Try again.\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');

    // Display the updated contents of the vector
    cout << "\nUpdated friends network:\n";
    for (int i = 0; i < numMembers; ++i) {
        cout << "Member " << i << " is friends with: ";
        for (int j = 0; j < numMembers; ++j) {
            if (friends[i][j] && i != j) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    // Q5: Compute and display the member with the most friends
    int maxFriends = 0;
    int mostFriendsMember = 0;
    for (int i = 0; i < numMembers; ++i) {
        int currentFriends = 0;
        for (int j = 0; j < numMembers; ++j) {
            if (friends[i][j] && i != j) {
                currentFriends++;
            }
        }
        if (currentFriends > maxFriends) {
            maxFriends = currentFriends;
            mostFriendsMember = i;
        }
    }
    cout << "\nMember " << mostFriendsMember << " has the most friends.\n";

    // Q6 (optional): Display the number of common friends between two members
    // (User input required)
    int member1, member2;
    cout << "\nEnter two member numbers to find common friends (separated by space): ";
    cin >> member1 >> member2;

    // Check validity of member numbers
    if (member1 >= 0 && member1 < numMembers && member2 >= 0 && member2 < numMembers) {
        int commonFriends = 0;
        for (int i = 0; i < numMembers; ++i) {
            if (friends[member1][i] && friends[member2][i]) {
                commonFriends++;
            }
        }
        cout << "Number of common friends between members " << member1 << " and " << member2 << ": " << commonFriends << endl;
    } else {
        cout << "Invalid member numbers. Exiting.\n";
    }

    // Q7 (optional): Check and display if the vector is correct (symmetric)
    bool isSymmetric = true;
    for (int i = 0; i < numMembers; ++i) {
        for (int j = 0; j < numMembers; ++j) {
            if (friends[i][j] != friends[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    if (isSymmetric) {
        cout << "\nThe friends vector is symmetric.\n";
    } else {
        cout << "\nThe friends vector is not symmetric.\n";
    }

    // Q8 (optional): Add names vector and display members' names
    vector<string> names = {"Alice", "Bob", "Charlie", "David"};
    cout << "\nDisplaying members' names:\n";
    for (int i = 0; i < numMembers; ++i) {
        cout << "Member " << names[i] << " is friends with: ";
        for (int j = 0; j < numMembers; ++j) {
            if (friends[i][j] && i != j) {
                cout << names[j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
