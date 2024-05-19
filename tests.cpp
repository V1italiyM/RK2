#include <gtest/gtest.h>
#include "house_and_theme.cpp"
#include "abstraction.h"
#include "implementor.h"

TEST(BridgeTest, ConcreteImplementorAOperation) {
    ConcreteImplementorA implA;
    RefinedAbstraction abs(&implA);
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorA Operation");
}

TEST(BridgeTest, ConcreteImplementorBOperation) {
    ConcreteImplementorB implB;
    RefinedAbstraction abs(&implB);
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorB Operation");
}

TEST(BridgeTest, ChangeImplementor) {
    ConcreteImplementorA implA;
    RefinedAbstraction abs(&implA);
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorA Operation");
    ConcreteImplementorB implB;
    abs.SetImplementor(&implB);
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorB Operation");
}
