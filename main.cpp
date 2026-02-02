#include <bits/stdc++.h>
using namespace std;
int main()
{
    int choice;
    int itemCount = 0;

    string itemName[100];
    int quantity[100];
    float price[100];

    while (true)
    {
        cout << "\n===== SUPERMARKET BILLING SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Generate Bill\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter item name: ";
            cin >> itemName[itemCount];
            cout << "Enter quantity: ";
            cin >> quantity[itemCount];
            cout << "Enter price per item: ";
            cin >> price[itemCount];

            itemCount++;
            cout << "Item added successfully!\n";
        }

        else if (choice == 2)
        {
            if (itemCount == 0)
            {
                cout << "\nNo items added yet.\n";
            }
            else
            {
                cout << "\nItems List:\n";
                cout << left << setw(15) << "Item"
                     << setw(10) << "Qty"
                     << setw(10) << "Price\n";

                for (int i = 0; i < itemCount; i++)
                {
                    cout << left << setw(15) << itemName[i]
                         << setw(10) << quantity[i]
                         << setw(10) << price[i] << endl;
                }
            }
        }

        else if (choice == 3)
        {
            float total = 0;
            cout << "\n===== BILL =====\n";
            cout << left << setw(15) << "Item"
                 << setw(10) << "Qty"
                 << setw(10) << "Price"
                 << setw(10) << "Total\n";
                 cout << "----------------------------------------\n";

            for (int i = 0; i < itemCount; i++)
            {
                float cost = quantity[i] * price[i];
                total += cost;

                cout << left << setw(15) << itemName[i]
                     << setw(10) << quantity[i]
                     << setw(10) << price[i]
                     << setw(10) << cost << endl;
            }
            cout << "----------------------------------------\n";
            cout << "\nGrand Total: Rs. " << total << endl;
        }

        else if (choice == 4)
        {
            cout << "\nThank you for using the system!\n";
            break;
        }

        else
        {
            cout << "\nInvalid choice! Try again.\n";
        }
    }

    return 0;
}