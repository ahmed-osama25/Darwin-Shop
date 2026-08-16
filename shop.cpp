#include <iostream>
#include <string>

using namespace std;

struct product
{
    string name;
    string category;
    double price;
};

product cart[100];
int cartsize = 0;

// ==================== PRODUCTS ====================

// GPU
string gpu[4] =
{
    "NEXORAA Shadow 1",
    "NEXORAA Shadow 2",
    "NEXORAA Shadow 3",
    "NEXORAA Shadow 4"
};

// CPU
string cpu[4] =
{
    "Nexora Core 1",
    "Nexora Core 2",
    "Nexora Core 3",
    "Nexora Core 4"
};

// RAM
string ram[4] =
{
    "Vortex Memory A1 4 GB 3200",
    "Vortex Memory A2 8 GB 3200",
    "Vortex Memory A3 16 GB 3200",
    "Vortex Memory A4 32 GB 3200"
};

// Keyboard
string keyboard[4] =
{
    "Nexora Keyboard 1 Blue Switch",
    "Nexora Keyboard 2 Red Switch",
    "Nexora Keyboard 3 Green Switch",
    "Nexora Keyboard 4 Black Switch"
};

// Microphone
string mic[4] =
{
    "Titan Mic 1",
    "Titan Mic 2",
    "Titan Mic 3",
    "Titan Mic 4"
};

// SSD
string ssd[4] =
{
    "Vortex SSD 1 256 GB",
    "Vortex SSD 2 512 GB",
    "Vortex SSD 3 1 TB",
    "Vortex SSD 4 2 TB"
};

// Mouse
string mouse[4] =
{
    "Titan Mouse 1",
    "Titan Mouse 2",
    "Titan Mouse 3",
    "Titan Mouse 4"
};


// ==================== MENU ====================

void showCategories()
{
    cout << "\n======================= Darwin Shop =======================\n";
    cout << "1. GPU\n";
    cout << "2. CPU\n";
    cout << "3. RAM\n";
    cout << "4. Keyboard\n";
    cout << "5. Microphone\n";
    cout << "6. SSD\n";
    cout << "7. Mouse\n";
    cout << "0. Checkout & Exit\n";
    cout << "============================================================\n";
}


// ==================== MAIN ====================

int main()
{
    int choice;

    while (true)
    {
        showCategories();

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

            // ==================== CHECKOUT ====================

            case 0:
            {
                cout << "\n================ Checkout ================\n";

                if (cartsize == 0)
                {
                    cout << "Your cart is empty!\n";
                }
                else
                {
                    double total = 0;

                    cout << "\nYour Order:\n";
                    cout << "-------------------------------------------\n";

                    for (int i = 0; i < cartsize; i++)
                    {
                        cout << i + 1 << ". "
                             << cart[i].name
                             << " | Category: "
                             << cart[i].category
                             << " | Price: $"
                             << cart[i].price
                             << endl;

                        total += cart[i].price;
                    }

                    cout << "-------------------------------------------\n";
                    cout << "Total Price: $" << total << endl;
                }

                cout << "===========================================\n";
                cout << "Thank you for shopping with us!\n";

                cout << "\nPress Enter to exit...";

                cin.ignore();
                cin.get();

                return 0;
            }


            // ==================== GPU ====================

            case 1:
            {
                cout << "\n====== Available GPUs ======\n";

                for (int i = 0; i < 4; i++)
                {
                    cout << i + 1 << ". " << gpu[i] << endl;
                }

                int gpuChoice;

                cout << "\nChoose a GPU: ";
                cin >> gpuChoice;

                switch (gpuChoice)
                {
                    case 1:
                        cout << "\nYou selected: " << gpu[0] << endl;
                        cout << "Price: $499.99\n";

                        cart[cartsize].name = gpu[0];
                        cart[cartsize].category = "GPU";
                        cart[cartsize].price = 499.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 2:
                        cout << "\nYou selected: " << gpu[1] << endl;
                        cout << "Price: $599.99\n";

                        cart[cartsize].name = gpu[1];
                        cart[cartsize].category = "GPU";
                        cart[cartsize].price = 599.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 3:
                        cout << "\nYou selected: " << gpu[2] << endl;
                        cout << "Price: $699.99\n";

                        cart[cartsize].name = gpu[2];
                        cart[cartsize].category = "GPU";
                        cart[cartsize].price = 699.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 4:
                        cout << "\nYou selected: " << gpu[3] << endl;
                        cout << "Price: $799.99\n";

                        cart[cartsize].name = gpu[3];
                        cart[cartsize].category = "GPU";
                        cart[cartsize].price = 799.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    default:
                        cout << "Invalid GPU choice!\n";
                }

                break;
            }


            // ==================== CPU ====================

            case 2:

            {
                cout << "\n====== Available CPUs ======\n";

                for (int i = 0; i < 4; i++)
                {
                    cout << i + 1 << ". " << cpu[i] << endl;
                }

                int cpuChoice;

                cout << "\nChoose a CPU: ";
                cin >> cpuChoice;

                switch (cpuChoice)
                {
                    case 1:
                        cout << "\nYou selected: " << cpu[0] << endl;
                        cout << "Price: $299.99\n";

                        cart[cartsize].name = cpu[0];
                        cart[cartsize].category = "CPU";
                        cart[cartsize].price = 299.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 2:
                        cout << "\nYou selected: " << cpu[1] << endl;
                        cout << "Price: $399.99\n";

                        cart[cartsize].name = cpu[1];
                        cart[cartsize].category = "CPU";
                        cart[cartsize].price = 399.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 3:
                        cout << "\nYou selected: " << cpu[2] << endl;
                        cout << "Price: $499.99\n";

                        cart[cartsize].name = cpu[2];
                        cart[cartsize].category = "CPU";
                        cart[cartsize].price = 499.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 4:
                        cout << "\nYou selected: " << cpu[3] << endl;
                        cout << "Price: $599.99\n";

                        cart[cartsize].name = cpu[3];
                        cart[cartsize].category = "CPU";
                        cart[cartsize].price = 599.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    default:
                        cout << "Invalid CPU choice!\n";
                }

                break;
            }


            // ==================== RAM ====================

            case 3:
            {
                cout << "\n====== Available RAMs ======\n";

                for (int i = 0; i < 4; i++)
                {
                    cout << i + 1 << ". " << ram[i] << endl;
                }

                int ramChoice;

                cout << "\nChoose a RAM: ";
                cin >> ramChoice;

                switch (ramChoice)
                {
                    case 1:
                        cout << "\nYou selected: " << ram[0] << endl;
                        cout << "Price: $49.99\n";

                        cart[cartsize].name = ram[0];
                        cart[cartsize].category = "RAM";
                        cart[cartsize].price = 49.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 2:
                        cout << "\nYou selected: " << ram[1] << endl;
                        cout << "Price: $79.99\n";

                        cart[cartsize].name = ram[1];
                        cart[cartsize].category = "RAM";
                        cart[cartsize].price = 79.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 3:
                        cout << "\nYou selected: " << ram[2] << endl;
                        cout << "Price: $149.99\n";

                        cart[cartsize].name = ram[2];
                        cart[cartsize].category = "RAM";
                        cart[cartsize].price = 149.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 4:
                        cout << "\nYou selected: " << ram[3] << endl;
                        cout << "Price: $299.99\n";

                        cart[cartsize].name = ram[3];
                        cart[cartsize].category = "RAM";
                        cart[cartsize].price = 299.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    default:
                        cout << "Invalid RAM choice!\n";
                }

                break;
            }


            // ==================== KEYBOARD ====================

            case 4:
            {
                cout << "\n====== Available Keyboards ======\n";

                for (int i = 0; i < 4; i++)
                {
                    cout << i + 1 << ". " << keyboard[i] << endl;
                }

                int keyboardChoice;

                cout << "\nChoose a Keyboard: ";
                cin >> keyboardChoice;

                switch (keyboardChoice)
                {
                    case 1:
                        cout << "\nYou selected: " << keyboard[0] << endl;
                        cout << "Price: $49.99\n";

                        cart[cartsize].name = keyboard[0];
                        cart[cartsize].category = "Keyboard";
                        cart[cartsize].price = 49.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 2:
                        cout << "\nYou selected: " << keyboard[1] << endl;
                        cout << "Price: $59.99\n";

                        cart[cartsize].name = keyboard[1];
                        cart[cartsize].category = "Keyboard";
                        cart[cartsize].price = 59.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 3:
                        cout << "\nYou selected: " << keyboard[2] << endl;
                        cout << "Price: $69.99\n";

                        cart[cartsize].name = keyboard[2];
                        cart[cartsize].category = "Keyboard";
                        cart[cartsize].price = 69.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 4:
                        cout << "\nYou selected: " << keyboard[3] << endl;
                        cout << "Price: $79.99\n";

                        cart[cartsize].name = keyboard[3];
                        cart[cartsize].category = "Keyboard";
                        cart[cartsize].price = 79.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    default:
                        cout << "Invalid Keyboard choice!\n";
                }

                break;
            }


            // ==================== MICROPHONE ====================

            case 5:
            {
                cout << "\n====== Available Microphones ======\n";

                for (int i = 0; i < 4; i++)
                {
                    cout << i + 1 << ". " << mic[i] << endl;
                }

                int micChoice;

                cout << "\nChoose a Microphone: ";
                cin >> micChoice;

                switch (micChoice)
                {
                    case 1:
                        cout << "\nYou selected: " << mic[0] << endl;
                        cout << "Price: $99.99\n";

                        cart[cartsize].name = mic[0];
                        cart[cartsize].category = "Microphone";
                        cart[cartsize].price = 99.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 2:
                        cout << "\nYou selected: " << mic[1] << endl;
                        cout << "Price: $129.99\n";

                        cart[cartsize].name = mic[1];
                        cart[cartsize].category = "Microphone";
                        cart[cartsize].price = 129.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 3:
                        cout << "\nYou selected: " << mic[2] << endl;
                        cout << "Price: $159.99\n";

                        cart[cartsize].name = mic[2];
                        cart[cartsize].category = "Microphone";
                        cart[cartsize].price = 159.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 4:
                        cout << "\nYou selected: " << mic[3] << endl;
                        cout << "Price: $199.99\n";

                        cart[cartsize].name = mic[3];
                        cart[cartsize].category = "Microphone";
                        cart[cartsize].price = 199.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    default:
                        cout << "Invalid Microphone choice!\n";
                }

                break;
            }


            // ==================== SSD ====================

            case 6:
            {
                cout << "\n====== Available SSDs ======\n";

                for (int i = 0; i < 4; i++)
                {
                    cout << i + 1 << ". " << ssd[i] << endl;
                }

                int ssdChoice;

                cout << "\nChoose an SSD: ";
                cin >> ssdChoice;

                switch (ssdChoice)
                {
                    case 1:
                        cout << "\nYou selected: " << ssd[0] << endl;
                        cout << "Price: $49.99\n";

                        cart[cartsize].name = ssd[0];
                        cart[cartsize].category = "SSD";
                        cart[cartsize].price = 49.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 2:
                        cout << "\nYou selected: " << ssd[1] << endl;
                        cout << "Price: $79.99\n";

                        cart[cartsize].name = ssd[1];
                        cart[cartsize].category = "SSD";
                        cart[cartsize].price = 79.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 3:
                        cout << "\nYou selected: " << ssd[2] << endl;
                        cout << "Price: $149.99\n";

                        cart[cartsize].name = ssd[2];
                        cart[cartsize].category = "SSD";
                        cart[cartsize].price = 149.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 4:
                        cout << "\nYou selected: " << ssd[3] << endl;
                        cout << "Price: $299.99\n";

                        cart[cartsize].name = ssd[3];
                        cart[cartsize].category = "SSD";
                        cart[cartsize].price = 299.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    default:
                        cout << "Invalid SSD choice!\n";
                }

                break;
            }


            // ==================== MOUSE ====================

            case 7:
            {
                cout << "\n====== Available Mouse ======\n";

                for (int i = 0; i < 4; i++)
                {
                    cout << i + 1 << ". " << mouse[i] << endl;
                }

                int mouseChoice;

                cout << "\nChoose a Mouse: ";
                cin >> mouseChoice;

                switch (mouseChoice)
                {
                    case 1:
                        cout << "\nYou selected: " << mouse[0] << endl;
                        cout << "Price: $49.99\n";

                        cart[cartsize].name = mouse[0];
                        cart[cartsize].category = "Mouse";
                        cart[cartsize].price = 49.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 2:
                        cout << "\nYou selected: " << mouse[1] << endl;
                        cout << "Price: $59.99\n";

                        cart[cartsize].name = mouse[1];
                        cart[cartsize].category = "Mouse";
                        cart[cartsize].price = 59.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 3:
                        cout << "\nYou selected: " << mouse[2] << endl;
                        cout << "Price: $69.99\n";

                        cart[cartsize].name = mouse[2];
                        cart[cartsize].category = "Mouse";
                        cart[cartsize].price = 69.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    case 4:
                        cout << "\nYou selected: " << mouse[3] << endl;
                        cout << "Price: $79.99\n";

                        cart[cartsize].name = mouse[3];
                        cart[cartsize].category = "Mouse";
                        cart[cartsize].price = 79.99;
                        cartsize++;

                        cout << "Added to cart!\n";
                        break;

                    default:
                        cout << "Invalid Mouse choice!\n";
                }

                break;
            }


            // ==================== INVALID ====================

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    }

    return 0;
    
}