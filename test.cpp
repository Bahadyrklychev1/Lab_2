#include <gtest/gtest.h>
#include <string>


std::string helloWorld() {
    return "Hello, World!";
}

// Тест
TEST(HelloWorldTest, OutputTest) {
    EXPECT_EQ(helloWorld(), "Hello, World!");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}