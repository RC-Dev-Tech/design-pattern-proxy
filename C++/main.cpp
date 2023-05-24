/*
 * Design Pattern - Proxy 代理人模式
 * 
 * 在這個範例中，Subject是一個介面，定義了RealSubject和Proxy的公共介面。
 * RealSubject是Subject的具體實現，代表真實的對象。
 * Proxy保存一個對RealSubject的引用，並提供與RealSubject相同的介面，使得Proxy可以替代RealSubject。
 * Client使用Subject介面與RealSubject和Proxy進行交互，可以在任何需要RealSubject的地方使用Proxy。
 * 
 * 在main函式中，我們創建了一個Proxy對象並調用其Request方法。
 * Proxy在處理請求時會根據需要創建RealSubject對象並執行請求。
 */

#include <iostream>

/*
 * Subject介面
*/
class Subject {
public:
    virtual void Request() = 0;
};

/*
 * RealSubject實現
*/
class RealSubject : public Subject {
public:
    void Request() override {
        std::cout << "RealSubject: Handling request." << std::endl;
    }
};

/*
 * Proxy
*/
class Proxy : public Subject {
private:
    RealSubject* realSubject;

public:
    Proxy() : realSubject(nullptr) {}

    ~Proxy() {
        delete realSubject;
    }

    void Request() override {
        // 在需要時才創建RealSubject並執行請求
        if (realSubject == nullptr) {
            realSubject = new RealSubject();
        }
        std::cout << "Proxy: Handling request." << std::endl;
        realSubject->Request();
    }
};

/*
 * Client
*/
int main() {
    Proxy proxy;
    proxy.Request();

    return 0;
}
