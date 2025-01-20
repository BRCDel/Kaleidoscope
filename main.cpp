#include <SFML/Graphics.hpp>

int main(){
	//haven't done that one in a while
	sf::RenderWindows window(sf::VideoMode({200,200}), "Ya didn't fuck it!");
	sf::CircleShape shape (100.f);
	shape.setFillColor(sf::Color::Purple);
	
	while (window.isOpen()){
		sf:Event event;
		while (window.pollEvent(event)){
			if (event.type == sf::Event::Closed){
				window.close();
			}
		}
		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}