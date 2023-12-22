#include "./inc/Serializer.hpp"

int main()
{
    Data *originalData = new Data;
    originalData->intValue = 42;
    originalData->stringValue = "hello_world";

    uintptr_t serialized = Serializer::serialize(originalData);
    Data* deserializedData = Serializer::deserialize(serialized);

	std::cout << std::endl;
    std::cout << "original data address: " << &originalData << std::endl;
    std::cout << "after serialization: " << deserializedData << std::endl;
    std::cout << "deserialized content: " << deserializedData->intValue << " " \
    << deserializedData->stringValue << std::endl;
	std::cout << std::endl;

    delete originalData;

    return 0;
}
