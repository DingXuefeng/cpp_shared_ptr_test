/*****************************************************************************/
// Author: Xuefeng Ding <xuefengd@princeton.edu>
// Institute: Department of Physics, Princeton University
// Date: 2/16/22
// Version: v1.0
// Description: GooStats, a statistical analysis toolkit that runs on GPU.
//
// All rights reserved. 2022 copyrighted.
/*****************************************************************************/
#include <memory>
#include <iostream>
#include <map>

class WithFoot {
public:
    WithFoot() = default;

    ~WithFoot() { std::cout << "delete foot" << std::endl; }

    void run() { std::cout << "run" << std::endl; }
};

class WithMouth {
public:
    WithMouth() = default;

    ~WithMouth() { std::cout << "delete mouth" << std::endl; }

    void eat() { std::cout << "eat" << std::endl; }
};

class Cat : public WithFoot, public WithMouth {
public:
    Cat() = default;

    ~Cat() { std::cout << "delete cat" << std::endl; }
};

int main(int, char **) {
    {
//        Cat *cat = new Cat();
//        std::unique_ptr<WithFoot> pp = std::unique_ptr<WithFoot>(cat);
//        Cat second;
//        std::shared_ptr<Cat> pcat = std::make_shared<Cat>();
//        std::shared_ptr<WithFoot> p2 { pcat };
//        std::shared_ptr<WithFoot> p3 = p2;
//        std::shared_ptr<Cat> pcat2 (pcat.get());
//        pcat->run();
//        pcat->eat();
//        p2->run();
//        pcat2->eat();

        //        std::shared_ptr<WithMouth> pp (static_cast<Cat*>(pcat.get()));
        //        pp->eat();
        std::map<std::string,std::shared_ptr<void>> database;
        database["cat"] = std::make_shared<Cat>();
        database["WithMouth"] = std::make_shared<WithMouth>();
        database["WithFoot"] = std::make_shared<WithFoot>();
        database["string"] = std::make_shared<std::string>();
        database["int"] = std::make_shared<int>();
    }
    return 0;
}