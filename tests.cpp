#include <gtest/gtest.h>
#include "house_and_theme.cpp"

TEST(BridgeTest, InitialState) {
    // Создание объектов
    ImplementorA implA;
    RefinedAbstraction abs(&implA);

    // Проверка начального состояния
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorA: Operation");
}

TEST(BridgeTest, ChangeImplementor) {
    // Создание объектов
    ImplementorA implA;
    RefinedAbstraction abs(&implA);
    
    // Смена реализации
    ImplementorB implB;
    abs.SetImplementor(&implB);
    
    // Проверка смены реализации
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorB: Operation");
}

TEST(BridgeTest, ChangeToInitialImplementor) {
    // Создание объектов
    ImplementorA implA;
    RefinedAbstraction abs(&implA);

    // Смена реализации
    ImplementorB implB;
    abs.SetImplementor(&implB);
    
    // Сброс к начальной реализации
    abs.SetImplementor(&implA);

    // Проверка возвращения к начальной реализации
    EXPECT_EQ(abs.Operation(), "ConcreteImplementorA: Operation");
}
