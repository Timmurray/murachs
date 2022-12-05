double discount_percent;

if (subtotal >= 300){
    discount_percent= .3;
}
else if(subtotal >= 200){
    discount_percent = .1;
} else if(subtotal >= 100){
    discount_percent = .1;
} else {
    discount_percent = .05;
}

double discount_percent = subtotal >= 100 ? .1 : .05;

string product_description;

switch(product_id) {
    case 1:
        product_description = "Hammer";
        break;
    case 2:
        product_description = "Box of Nails";
        break;
    case 3:
        product_description = "No product found for specified ID";
        break;
}

string day;
switch(day_of_week){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        day = "weekday";
        break;
    case 6:
    case 7:
        day = "weekend"
        break;
}

//display menu
cout << "1. List all movies" << endl
     << "2. Add a movie" << endl
     << "3. Exit" << endl << endl;

// get menu item from user
cout << "Menu item: ";
int menu_item;
cin >> menu_item;

// execute the corrrect code fo the menu item
switch(menu_item) {
    case 1:
        cout << "MOVIE LIST" << endl
        // code that lists all movies goes here
        break;
    case 2:
        cout << "ADD A MOVIE" << endl
        // code to add a movie goes here
        break;
    case 3:
        cout << "Have a good afternooon!";
        break;
    default:
        cout << "Invalid menu item! Try again." << endl;
        break;
}

int i = 1;
int sum = 0;
while(i<5){
    cout << i << ' ';
    sum += i;
    ++i;
}
cout << "\nSum: " << sum << endl;

while (i < 5)
    cout << i++ << ' ';
cout << "\nThe loop has ended." << endl;

char choice = 'y';
while (choice == 'y'){
    cout << 'ask again? (y/n): '
    cin << choice;
}
cout << "bye!" << endl;

