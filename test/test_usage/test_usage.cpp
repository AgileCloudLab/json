#include <nlohmann/json.hpp>

#include <gtest/gtest.h>

TEST(test_nlohmann_json, test_nlohmann_json)
{
    nlohmann::json obj;
    obj["test"] = "test";

    EXPECT_EQ(obj["test"].get<std::string>(), "test");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
