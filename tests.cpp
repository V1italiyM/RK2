#include "gtest/gtest.h"
#include "house_and_theme.cpp" // Подключаем исходный файл, чтобы иметь доступ к классам

// Тесты для класса Theme
TEST(ThemeTest, WhiteThemeTest) {
    WhiteTheme whiteTheme;
    EXPECT_EQ(whiteTheme.Name(), "White Theme");
    EXPECT_EQ(whiteTheme.WallColor().R, 255);
    EXPECT_EQ(whiteTheme.WallColor().G, 255);
    EXPECT_EQ(whiteTheme.WallColor().B, 255);
    // Проверьте остальные методы аналогичным образом
}

TEST(ThemeTest, DarkThemeTest) {
    DarkTheme darkTheme;
    EXPECT_EQ(darkTheme.Name(), "Dark Theme");
    EXPECT_EQ(darkTheme.WallColor().R, 0);
    EXPECT_EQ(darkTheme.WallColor().G, 0);
    EXPECT_EQ(darkTheme.WallColor().B, 0);
    // Проверьте остальные методы аналогичным образом
}

// Тесты для класса House
TEST(HouseTest, OneRoomTest) {
    OneRoom oneRoom(std::make_shared<WhiteTheme>());
    EXPECT_EQ(oneRoom.Name(), "One Room");
    // Добавьте другие проверки
}

// Другие тесты аналогичным образом

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
