# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Proxy 代理人模式  
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---
<br>

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---
<br>

## 目的
控制對一個對象的訪問，以便在不改變原始對象的情況下添加額外的功能。

---
<br>

## 使用時機
當需要控制對一個對象的訪問時，<br>
例如：保護敏感對象、遠程訪問對象、對對象的使用進行計數等等。

---
<br>

## URL結構圖
![](https://drive.google.com/uc?id=1bX1KD9Q9Pm7503ngV6eVaIIPEv7GTRPm)
> 圖片來源：[Refactoring.Guru - Proxy](https://refactoring.guru/design-patterns/proxy)

---
<br>

## 實作成員
* Subject
  * 定義RealSubject和Proxy的公共介面，這樣在任何使用RealSubject的地方都可以使用Proxy。
* RealSubject
  * 定義Proxy所代表的真實對象。
* Proxy
  * 保存一個引用使得代理可以訪問RealSubject，同時提供與RealSubject相同的介面，這樣代理就可以替代RealSubject。
* Client
  * 使用Subject接口與RealSubject和Proxy進行交互，因此可以在任何需要RealSubject的地方使用Proxy。

---
<br>

## 實作範例:
- [待補...]() 

---
<br>

## 參考資料
* [Wiki - Proxy Pattern](https://en.wikipedia.org/wiki/Proxy_pattern) <br>
* [Refactoring.Guru - Proxy](https://refactoring.guru/design-patterns/proxy) <br>

---
<br>

---
<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
