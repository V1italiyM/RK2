#include <gtest/gtest.h>
#include "house_and_theme.cpp"
#include "abstraction.h"
#include "implementor.h"

TEST(BridgeTest, TestOperationA) {
    ConcreteImplementorA implA;
    RefinedAbstraction abs(&implA);
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorA: Operation");
}

TEST(BridgeTest, TestOperationB) {
    ConcreteImplementorB implB;
    RefinedAbstraction abs(&implB);
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorB: Operation");
}

TEST(BridgeTest, TestChangeImplementor) {
    ConcreteImplementorA implA;
    RefinedAbstraction abs(&implA);
    abs.SetImplementor(&implA);
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorA: Operation");
}
