#include <gtest/gtest.h>
#include "house_and_theme.cpp"

TEST(HouseTest, InitialState) {
    House house;
    EXPECT_EQ(house.GetThemeName(), "Default");
    EXPECT_EQ(house.GetWallColor(), "White");
    EXPECT_EQ(house.GetDoorColor(), "Brown");
    EXPECT_EQ(house.GetRoofMaterial(), "Tiles");
}

TEST(HouseTest, SetTheme) {
    House house;
    house.SetTheme("Modern");
    EXPECT_EQ(house.GetThemeName(), "Modern");
    EXPECT_EQ(house.GetWallColor(), "Gray");
    EXPECT_EQ(house.GetDoorColor(), "Black");
    EXPECT_EQ(house.GetRoofMaterial(), "Metal");
}

TEST(HouseTest, SetCustomTheme) {
    House house;
    house.SetCustomTheme("Custom", "Blue", "Red", "Glass");
    EXPECT_EQ(house.GetThemeName(), "Custom");
    EXPECT_EQ(house.GetWallColor(), "Blue");
    EXPECT_EQ(house.GetDoorColor(), "Red");
    EXPECT_EQ(house.GetRoofMaterial(), "Glass");
}
