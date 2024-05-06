#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Book {
private:
	string title;
	string autor;
	double price;
public:
	Book(const string& title, const string& autor, const double& price) : title(title), autor(autor), price(price){}
	string getTitle() const { return title; }
	string getautor() const { return autor; }
	double getPrice() const { return price; }
};
class Bookstore {
private:
	vector<Book> books;
public:
	void addBook(const Book& book){
		books.push_back(book);
		cout << "Книга "<<book.getTitle()<<" добавлена в магазин"<<endl;
	}
	void removeBook(const Book& book) {
		for (auto it = books.begin(); it != books.end(); it++) {
			if ((it->getTitle() == book.getTitle()) && (it->getautor() == book.getautor())) {
				books.erase(it);
				cout << "Книга " << book.getTitle() << " удалена из магазина" << endl;
				break;
			}
		}
	}
};
int main() {

}