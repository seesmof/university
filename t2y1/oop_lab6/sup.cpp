#include "sup.h"
#include "../../lib.h"
using namespace std;

/*
Варіант 5. Для класу «Геометрична фігура» з варіанту 2, створити похідний клас для роботи з фігурою типу «прямокутник». Визначити інтерфейсну частину у класах, застосувати атрибути доступу.

Варіант 2. Створити абстрактний клас для роботи з геометричними фігурами на екрані. Передбачити такі компоненти–властивості класу: координати центра фігури; кут повороту (у градусах); масштабний фактор; і такі функції–методи: показати фігуру на екрані; зробити фігуру невидною (знищити її зображення); повернути фігуру на заданий кут (кут надається у градусах); пересунути фігуру на наданий вектор.
*/

class GeometricFigure
{
protected:
    ll centerX;
    ll centerY;
    ll angle;
    ll scale;

public:
    // declare default constructor
    GeometricFigure() : centerX(0), centerY(0), angle(0), scale(0) {}

    // declare parameterized constructor
    GeometricFigure(ll centerX, ll centerY, ll angle, ll scale) : centerX(centerX), centerY(centerY), angle(angle), scale(scale) {}

    // declare pure virtual functions
    virtual void show() = 0;
    virtual void hide() = 0;
    virtual void rotate(ll angle) = 0;
    virtual void move(ll x, ll y) = 0;

    // declare a default virtual desctructor
    virtual ~GeometricFigure() {}
};

// declare derived class
class Rectangle : public GeometricFigure
{
private:
    string color;
    string symbol;

public:
    // declare default constructor
    Rectangle() : color(""), symbol("") {}

    // declare parameterized constructor
    Rectangle(ll centerX, ll centerY, ll angle, ll scale, string color) : GeometricFigure(centerX, centerY, angle, scale), color(color), symbol("") {}

    // declare show method
    void show() override
    {
        // check for angle for both colors
        if (color == "orange")
        {
            if (angle == 90 || angle == 180 || angle == 270 || angle == 360 || angle == 0)
                symbol = "🟧";
            else
                symbol = "🔶";
        }
        else
        {
            if (angle == 90 || angle == 180 || angle == 270 || angle == 360 || angle == 0)
                symbol = "🟦";
            else
                symbol = "🔷";
        }

        // output Y offset
        for (ll k = 0; k < centerY; k++)
            cout << "\n";

        // output rectangle
        for (ll i = 0; i < scale; i++)
        {
            // with X offset
            for (ll k = 0; k < centerX; k++)
                cout << "  ";
            // and rectangles themselves
            for (ll j = 0; j < scale; j++)
                cout << symbol;
            // end current line
            cout << endl;
        }
    }

    // declare hide method
    void hide() override
    {
        // replace symbol with whitespace
        symbol = " ";
    }

    // declare rotate method
    void rotate(ll angle) override
    {
        // modify by given angle
        angle += angle;
    }

    // declare move method
    void move(ll x, ll y) override
    {
        // move figure by given values
        centerX += x;
        centerY += y;
    }
};

// declare function for creating rectangle
void createRectangle(vector<unique_ptr<Rectangle>> &rectangles)
{
    cout << "How many rectangles to create: ";
    ll amount = getNum();

    if (amount < 0)
    {
        bad("Cannot create that many rectangles. Try again later...");
        return;
    }

    cout << endl;
    for (ll i = 0; i < amount; i++)
    {
        cout << "(" << i + 1 << ") Creating rectangle...\n";

        cout << "    "
             << "Enter rectangles's X offset: ";
        ll centerX = getNum();

        cout << "    "
             << "Enter rectangles's Y offset: ";
        ll centerY = getNum();

        cout << "    "
             << "Enter rectangles's angle: ";
        ll angle = getNum();

        cout << "    "
             << "Enter rectangles's scale: ";
        ll scale = getNum();

        string color;
        cout << "    "
             << "Enter rectangles's color ( orange | blue ): ";
        cin >> color;
        if (toLower(color) == "o" || toLower(color) == "orange")
            color = "orange";
        else
            color = "blue";

        rectangles.push_back(make_unique<Rectangle>(centerX, centerY, angle, scale, color));
        cout << endl;
    }

    if (rectangles.size() == amount)
        good("All rectangles were created successfully!");
    else
        bad("There was some problem creating rectangles");
    return;
}

void showRectangles(const vector<unique_ptr<Rectangle>> &rectangles)
{
    cout << BOLD << "Your available rectangles (" << rectangles.size() << "):\n\n"
         << UNBOLD;
    for (ll i = 0; i < rectangles.size(); i++)
    {
        cout << "(" << i + 1 << ") Outputting rectangle...\n";
        rectangles[i]->show();
        cout << endl;
    }
    return;
}

void deleteRectangle(vector<unique_ptr<Rectangle>> &rectangles)
{
    if (rectangles.size() == 0)
    {
        bad("No rectangles were created");
        return;
    }

    showRectangles(rectangles);
    cout << "Enter rectangle's number to delete: ";
    ll index = getNum();
    index--;
    cout << endl;

    if (index >= 0 && index < rectangles.size())
    {
        rectangles.erase(rectangles.begin() + index);
        good("Rectangle succesfully deleted!");
    }
    else
    {
        bad("Cannot delete the rectangle, because it doesn't exist");
    }
    return;
}

void modifyRectangle(vector<unique_ptr<Rectangle>> &rectangles)
{
    cout << "Enter rectangle's number to edit: ";
    ll index = getNum();
    index--;
    cout << endl;

    if (index >= 0 && index < rectangles.size())
    {
        cout << BOLD << "Choose the value to modify\n"
             << UNBOLD;
        cout << "1. Move" << endl;
        cout << "2. Rotate" << endl;
        cout << "Enter: ";
        ll userDecision = getNum();
        cout << endl;

        if (userDecision == 1)
        {
            cout << "Enter X offset: ";
            ll centerX = getNum();
            cout << endl;

            cout << "Enter Y offset: ";
            ll centerY = getNum();
            cout << endl;

            rectangles[index]->move(centerX, centerY);
            good("Rectangle successfully moved");
        }
        else
        {
            cout << "Enter angle: ";
            ll angle = getNum();
            cout << endl;

            rectangles[index]->rotate(angle);
            good("Rectangle succesfully rotated");
        }
    }
    else
    {
        bad("Invalid rectangle index. Try again");
    }
    return;
}

void outputMenu(vector<unique_ptr<Rectangle>> &rectangles)
{
    // output the menu
    cout << BOLD << "Welcome! Choose some option from below\n"
         << UNBOLD;
    cout << "1. Create rectangle\n";
    cout << "2. Show rectangles\n";
    cout << "3. Delete rectangle\n";
    cout << "4. Modify rectangle\n";
    cout << "5. Exit\n";
    // ask user to enter their choice
    cout << "Enter: ";
    // and validate it
    ll userDecision = getNum();
    cout << endl;

    if (userDecision == 1)
    {
        showRectangles(rectangles);
        createRectangle(rectangles);
    }
    else if (userDecision == 2)
    {
        showRectangles(rectangles);
    }
    else if (userDecision == 3)
    {
        deleteRectangle(rectangles);
    }
    else if (userDecision == 4)
    {
        showRectangles(rectangles);
        modifyRectangle(rectangles);
    }
}