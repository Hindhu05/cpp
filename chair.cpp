#include<iostream>
using namespace std;

enum class ChairType{armchair, rockingchair,foldingchair,functionchair, coffeechair, babychair};

enum class Color{Red, Green, Black};

class Chair{

    ChairType type;
    int capacity;
    string material;
    Color color;
    int price;
    int quantity;
    public:

    Chair(ChairType type, string material, Color color, int capacity, int quantity, int price){
        this->type = type;
        this->capacity=capacity;
        this->material=material;
        this->color = color;
        this->quantity = quantity;
        this->price = price;
    
        cout << "Hi There \n"
            << "Type of chair is " << get_chair_type(type)
            << "\n Material of chair is "<< material
            << "\n Color of chair is "<<get_color(color)
            << "\n Capacity is "<<capacity 
            << "\n quantity of chairs are "<<quantity;
        
            cout<< "\n price of the chair is "<<price;
            
    }

    // ChairType get_chair_type(){
    //     return this->type;
    // }

    string get_chair_type(ChairType type){
        
        switch(type){
            case ChairType::armchair: return "armchair";
            case ChairType::rockingchair: return "rockingchair";
            case ChairType::foldingchair: return "foldingchair";
            case ChairType::functionchair: return "functionchair";
            case ChairType::coffeechair: return "coffeechair";
        }

        return "<None>";
    }

    string get_color(Color Color){
        
        switch(this->color){
            case Color::Red: return "Red";
            case Color::Black: return "Black";
            case Color::Green: return "Green";
        }

        return "<None>";
    }

};


int main(){

    Chair my_simple_chair = Chair(ChairType::rockingchair, "wood", Color::Black, 90,2,90*2);

    //cout<<"\n"<<my_simple_chair.get_chair_type(my_simple_chair.get_chair_type());

    return 0;
}