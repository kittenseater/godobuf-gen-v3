#include <iostream>
#include <string>
#include <cstdint>
#include <vector>
#include <unordered_map>
#include <functional>
#include <fstream>

#include "pbtest3.pb.h"

// single fields

std::string f_double() {
    std::string out;
    Test1 m;
    m.set_f_double(1.2340000152587890625e1);
    m.SerializeToString(&out);
    return out;
}

std::string f_float() {
    std::string out;
    Test1 m;
    m.set_f_float(1.2340000152587890625e1);
    m.SerializeToString(&out);
    return out;
}

std::string f_int32() {
    std::string out;
    Test1 m;
    m.set_f_int32(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_int64() {
    std::string out;
    Test1 m;
    m.set_f_int64(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_uint32() {
    std::string out;
    Test1 m;
    m.set_f_uint32(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_uint64() {
    std::string out;
    Test1 m;
    m.set_f_uint64(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_sint32() {
    std::string out;
    Test1 m;
    m.set_f_sint32(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_sint64() {
    std::string out;
    Test1 m;
    m.set_f_sint64(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_fixed32() {
    std::string out;
    Test1 m;
    m.set_f_fixed32(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_fixed64() {
    std::string out;
    Test1 m;
    m.set_f_fixed64(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_sfixed32() {
    std::string out;
    Test1 m;
    m.set_f_sfixed32(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_sfixed64() {
    std::string out;
    Test1 m;
    m.set_f_sfixed64(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_bool() {
    std::string out;
    Test1 m;
    m.set_f_bool(false);
    m.SerializeToString(&out);
    return out;
}

std::string f_string() {
    std::string out;
    Test1 m;
    m.set_f_string("string value");
    m.SerializeToString(&out);
    return out;
}

std::string f_bytes() {
    std::string out;
    Test1 m;
    const char bytes[] = {1, 2, 3, 4};
    m.set_f_bytes(bytes, 4);
    m.SerializeToString(&out);
    return out;
}

std::string f_map() {
    std::string out;
    Test1 m;
    auto map = m.mutable_f_map();
    (*map)[1] = 2;
    (*map)[1000] = 2000;
    m.SerializeToString(&out);
    return out;
}

std::string f_oneof_f1() {
    std::string out;
    Test1 m;
    m.set_f_oneof_f1("oneof value");
    m.SerializeToString(&out);
    return out;
}

std::string f_oneof_f2() {
    std::string out;
    Test1 m;
    m.set_f_oneof_f2(1234);
    m.SerializeToString(&out);
    return out;
}

std::string f_empty_out() {
    std::string out;
    Test1 m;
    m.mutable_f_empty_out();
    m.SerializeToString(&out);
    return out;
}

std::string f_enum_out() {
    std::string out;
    Test1 m;
    m.set_f_enum_out(Enum0::ONE);
    m.SerializeToString(&out);
    return out;
}

std::string f_empty_inner() {
    std::string out;
    Test1 m;
    m.mutable_f_empty_inner();
    m.SerializeToString(&out);
    return out;
}

std::string f_enum_inner() {
    std::string out;
    Test1 m;
    m.set_f_enum_inner(Test2_TestEnum::Test2_TestEnum_VALUE_1);
    m.SerializeToString(&out);
    return out;
}

// repeated fields

std::string rf_double() {
    std::string out;
    Test1 m;
    m.add_rf_double(1.2340000152587890625e1);
    m.add_rf_double(5.6779998779296875e1);
    m.SerializeToString(&out);
    return out;
}

std::string rf_float() {
    std::string out;
    Test1 m;
    m.add_rf_float(1.2340000152587890625e1);
    m.add_rf_float(5.6779998779296875e1);
    m.SerializeToString(&out);
    return out;
}

std::string rf_int32() {
    std::string out;
    Test1 m;
    m.add_rf_int32(1234);
    m.add_rf_int32(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_int64() {
    std::string out;
    Test1 m;
    m.add_rf_int64(1234);
    m.add_rf_int64(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_uint32() {
    std::string out;
    Test1 m;
    m.add_rf_uint32(1234);
    m.add_rf_uint32(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_uint64() {
    std::string out;
    Test1 m;
    m.add_rf_uint64(1234);
    m.add_rf_uint64(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_sint32() {
    std::string out;
    Test1 m;
    m.add_rf_sint32(1234);
    m.add_rf_sint32(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_sint64() {
    std::string out;
    Test1 m;
    m.add_rf_sint64(1234);
    m.add_rf_sint64(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_fixed32() {
    std::string out;
    Test1 m;
    m.add_rf_fixed32(1234);
    m.add_rf_fixed32(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_fixed64() {
    std::string out;
    Test1 m;
    m.add_rf_fixed64(1234);
    m.add_rf_fixed64(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_sfixed32() {
    std::string out;
    Test1 m;
    m.add_rf_sfixed32(1234);
    m.add_rf_sfixed32(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_sfixed64() {
    std::string out;
    Test1 m;
    m.add_rf_sfixed64(1234);
    m.add_rf_sfixed64(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rf_bool() {
    std::string out;
    Test1 m;
    m.add_rf_bool(false);
    m.add_rf_bool(true);
    m.add_rf_bool(false);
    m.SerializeToString(&out);
    return out;
}

std::string rf_string() {
    std::string out;
    Test1 m;
    m.add_rf_string("string value one");
    m.add_rf_string("string value two");
    m.SerializeToString(&out);
    return out;
}

std::string rf_bytes() {
    std::string out;
    Test1 m;
    const char bytes1[] = {1, 2, 3, 4};
    const char bytes2[] = {5, 6, 7, 8};
    m.add_rf_bytes(bytes1, 4);
    m.add_rf_bytes(bytes2, 4);
    m.SerializeToString(&out);
    return out;
}

std::string rf_empty_out() {
    std::string out;
    Test1 m;
    m.add_rf_empty_out();
    m.add_rf_empty_out();
    m.add_rf_empty_out();
    m.SerializeToString(&out);
    return out;
}

std::string rf_enum_out() {
    std::string out;
    Test1 m;
    m.add_rf_enum_out(Enum0::ONE);
    m.add_rf_enum_out(Enum0::TWO);
    m.add_rf_enum_out(Enum0::THREE);
    m.SerializeToString(&out);
    return out;
}

std::string rf_empty_inner() {
    std::string out;
    Test1 m;
    m.add_rf_empty_inner();
    m.add_rf_empty_inner();
    m.add_rf_empty_inner();
    m.SerializeToString(&out);
    return out;
}

std::string rf_enum_inner() {
    std::string out;
    Test1 m;
    m.add_rf_enum_inner(Test2_TestEnum::Test2_TestEnum_VALUE_1);
    m.add_rf_enum_inner(Test2_TestEnum::Test2_TestEnum_VALUE_2);
    m.add_rf_enum_inner(Test2_TestEnum::Test2_TestEnum_VALUE_3);
    m.SerializeToString(&out);
    return out;
}

// empty repeated fields

std::string rf_double_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_double();
    m.SerializeToString(&out);
    return out;
}

std::string rf_float_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_float();
    m.SerializeToString(&out);
    return out;
}

std::string rf_int32_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_int32();
    m.SerializeToString(&out);
    return out;
}

std::string rf_int64_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_int64();
    m.SerializeToString(&out);
    return out;
}

std::string rf_uint32_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_uint32();
    m.SerializeToString(&out);
    return out;
}

std::string rf_uint64_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_uint64();
    m.SerializeToString(&out);
    return out;
}

std::string rf_sint32_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_sint32();
    m.SerializeToString(&out);
    return out;
}

std::string rf_sint64_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_sint64();
    m.SerializeToString(&out);
    return out;
}

std::string rf_fixed32_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_fixed32();
    m.SerializeToString(&out);
    return out;
}

std::string rf_fixed64_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_fixed64();
    m.SerializeToString(&out);
    return out;
}

std::string rf_sfixed32_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_sfixed32();
    m.SerializeToString(&out);
    return out;
}

std::string rf_sfixed64_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_sfixed64();
    m.SerializeToString(&out);
    return out;
}

std::string rf_bool_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_bool();
    m.SerializeToString(&out);
    return out;
}

std::string rf_string_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_string();
    m.SerializeToString(&out);
    return out;
}

std::string rf_bytes_empty() {
    std::string out;
    Test1 m;
    m.clear_rf_bytes();
    m.SerializeToString(&out);
    return out;
}

// repeated fields packed

std::string rfu_double() {
    std::string out;
    Test1 m;
    m.add_rfu_double(1.2340000152587890625e1);
    m.add_rfu_double(5.6779998779296875e1);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_float() {
    std::string out;
    Test1 m;
    m.add_rfu_float(1.2340000152587890625e1);
    m.add_rfu_float(5.6779998779296875e1);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_int32() {
    std::string out;
    Test1 m;
    m.add_rfu_int32f(1234);
    m.add_rfu_int32f(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_int64() {
    std::string out;
    Test1 m;
    m.add_rfu_int64f(1234);
    m.add_rfu_int64f(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_uint32() {
    std::string out;
    Test1 m;
    m.add_rfu_uint32(1234);
    m.add_rfu_uint32(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_uint64() {
    std::string out;
    Test1 m;
    m.add_rfu_uint64(1234);
    m.add_rfu_uint64(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_sint32() {
    std::string out;
    Test1 m;
    m.add_rfu_sint32(1234);
    m.add_rfu_sint32(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_sint64() {
    std::string out;
    Test1 m;
    m.add_rfu_sint64(1234);
    m.add_rfu_sint64(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_fixed32() {
    std::string out;
    Test1 m;
    m.add_rfu_fixed32(1234);
    m.add_rfu_fixed32(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_fixed64() {
    std::string out;
    Test1 m;
    m.add_rfu_fixed64(1234);
    m.add_rfu_fixed64(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_sfixed32() {
    std::string out;
    Test1 m;
    m.add_rfu_sfixed32(1234);
    m.add_rfu_sfixed32(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_sfixed64() {
    std::string out;
    Test1 m;
    m.add_rfu_sfixed64(1234);
    m.add_rfu_sfixed64(5678);
    m.SerializeToString(&out);
    return out;
}

std::string rfu_bool() {
    std::string out;
    Test1 m;
    m.add_rfu_bool(false);
    m.add_rfu_bool(true);
    m.add_rfu_bool(false);
    m.SerializeToString(&out);
    return out;
}

// default fields value

std::string f_int32_default() {
    std::string out;
    Test1 m;
    m.set_f_int32(0);
    m.SerializeToString(&out);
    return out;
}

std::string f_string_default() {
    std::string out;
    Test1 m;
    m.set_f_string("");
    m.SerializeToString(&out);
    return out;
}

std::string f_bytes_default() {
    std::string out;
    Test1 m;
    const char bytes[] = {};
    m.set_f_bytes(bytes, 0);
    m.SerializeToString(&out);
    return out;
}

// other tests

std::string test2_testinner3_testinner32() {
    std::string out;
    Test2_TestInner3_TestInner3_2 m;
    m.set_f1(12);
    m.set_f2(34);
    m.SerializeToString(&out);
    return out;
}

std::string test2_testinner3_testinner32_empty() {
    std::string out;
    Test2_TestInner3_TestInner3_2 m;
    m.SerializeToString(&out);
    return out;
}

std::string rf_inner_ene() {
    std::string out;
    Test1 m;
    m.add_rf_inner();
    auto i1 = m.add_rf_inner();
    i1->set_f1(12);
    i1->set_f2(34);
    m.add_rf_inner();
    m.SerializeToString(&out);
    return out;
}

std::string rf_inner_nen() {
    std::string out;
    Test1 m;
    auto i0 = m.add_rf_inner();
    i0->set_f1(12);
    i0->set_f2(34);
    m.add_rf_inner();
    auto i2 = m.add_rf_inner();
    i2->set_f1(12);
    i2->set_f2(34);
    m.SerializeToString(&out);
    return out;
}

std::string simple_all() {
    std::string out;
    Test1 m;
    
    m.set_f_double(1.2340000152587890625e1);
    m.set_f_float(1.2340000152587890625e1);
    m.set_f_int32(1234);
    m.set_f_int64(1234);
    m.set_f_uint32(1234);
    m.set_f_uint64(1234);
    m.set_f_sint32(1234);
    m.set_f_sint64(1234);
    m.set_f_fixed32(1234);
    m.set_f_fixed64(1234);
    m.set_f_sfixed32(1234);
    m.set_f_sfixed64(1234);
    m.set_f_bool(false);
    m.set_f_string("string value");
    const char bytes[] = {1, 2, 3, 4};
    m.set_f_bytes(bytes, 4);
    auto map = m.mutable_f_map();
    (*map)[1] = 2;
    (*map)[1000] = 2000;
    m.set_f_oneof_f1("oneof value");
    m.mutable_f_empty_out();
    m.set_f_enum_out(Enum0::ONE);
    m.mutable_f_empty_inner();
    m.set_f_enum_inner(Test2_TestEnum::Test2_TestEnum_VALUE_1);
    
    m.add_rf_double(1.2340000152587890625e1);
    m.add_rf_double(5.6779998779296875e1);
    m.add_rf_float(1.2340000152587890625e1);
    m.add_rf_float(5.6779998779296875e1);
    m.add_rf_int32(1234);
    m.add_rf_int32(5678);
    m.add_rf_int64(1234);
    m.add_rf_int64(5678);
    m.add_rf_uint32(1234);
    m.add_rf_uint32(5678);
    m.add_rf_uint64(1234);
    m.add_rf_uint64(5678);
    m.add_rf_sint32(1234);
    m.add_rf_sint32(5678);
    m.add_rf_sint64(1234);
    m.add_rf_sint64(5678);
    m.add_rf_fixed32(1234);
    m.add_rf_fixed32(5678);
    m.add_rf_fixed64(1234);
    m.add_rf_fixed64(5678);
    m.add_rf_sfixed32(1234);
    m.add_rf_sfixed32(5678);
    m.add_rf_sfixed64(1234);
    m.add_rf_sfixed64(5678);
    m.add_rf_bool(false);
    m.add_rf_bool(true);
    m.add_rf_bool(false);
    m.add_rf_string("string value one");
    m.add_rf_string("string value two");
    const char bytes1[] = {1, 2, 3, 4};
    const char bytes2[] = {5, 6, 7, 8};
    m.add_rf_bytes(bytes1, 4);
    m.add_rf_bytes(bytes2, 4);
    m.add_rf_empty_out();
    m.add_rf_empty_out();
    m.add_rf_empty_out();
    m.add_rf_enum_out(Enum0::ONE);
    m.add_rf_enum_out(Enum0::TWO);
    m.add_rf_enum_out(Enum0::THREE);
    m.add_rf_empty_inner();
    m.add_rf_empty_inner();
    m.add_rf_empty_inner();
    m.add_rf_enum_inner(Test2_TestEnum::Test2_TestEnum_VALUE_1);
    m.add_rf_enum_inner(Test2_TestEnum::Test2_TestEnum_VALUE_2);
    m.add_rf_enum_inner(Test2_TestEnum::Test2_TestEnum_VALUE_3);
    
    m.add_rfu_double(1.2340000152587890625e1);
    m.add_rfu_double(5.6779998779296875e1);
    m.add_rfu_float(1.2340000152587890625e1);
    m.add_rfu_float(5.6779998779296875e1);
    m.add_rfu_int32f(1234);
    m.add_rfu_int32f(5678);
    m.add_rfu_int64f(1234);
    m.add_rfu_int64f(5678);
    m.add_rfu_uint32(1234);
    m.add_rfu_uint32(5678);
    m.add_rfu_uint64(1234);
    m.add_rfu_uint64(5678);
    m.add_rfu_sint32(1234);
    m.add_rfu_sint32(5678);
    m.add_rfu_sint64(1234);
    m.add_rfu_sint64(5678);
    m.add_rfu_fixed32(1234);
    m.add_rfu_fixed32(5678);
    m.add_rfu_fixed64(1234);
    m.add_rfu_fixed64(5678);
    m.add_rfu_sfixed32(1234);
    m.add_rfu_sfixed32(5678);
    m.add_rfu_sfixed64(1234);
    m.add_rfu_sfixed64(5678);
    m.add_rfu_bool(false);
    m.add_rfu_bool(true);
    m.add_rfu_bool(false);
    
    m.SerializeToString(&out);
    return out;
}

std::string test2_1() {
    std::string out;
    Test2 m;
    
    m.add_f1("test text-1");
    m.add_f1("test text-2");
    m.add_f1("test text-3");
    
    m.set_f2(1234);
    
    m.set_f3("yet another text");
    
    m.mutable_f5();
    
    m.SerializeToString(&out);
    return out;
}

std::string test2_2() {
    std::string out;
    Test2 m;
    
    auto f6 = m.mutable_f6();
    auto map = f6->mutable_f1();
    
    Test2_TestInner3_TestInner3_2 one;
    one.set_f1(111);
    one.set_f2(1111);
    (*map)["one"] = one;
    Test2_TestInner3_TestInner3_2 two;
    two.set_f1(222);
    two.set_f2(2222);
    (*map)["two"] = two;
    Test2_TestInner3_TestInner3_2 three;
    three.set_f1(333);
    three.set_f2(3333);
    (*map)["three"] = three;
    Test2_TestInner3_TestInner3_2 four;
    four.set_f1(444);
    four.set_f2(4444);
    (*map)["four"] = four;    
    
    f6->set_f2(Test2_TestEnum::Test2_TestEnum_VALUE_1);
    f6->mutable_f3();
    
    m.SerializeToString(&out);
    return out;
}

std::string test2_3() {
    std::string out;
    Test2 m;
    
    m.add_f1("test text-1");
    m.add_f1("test text-2");
    m.add_f1("test text-3");
    
    m.set_f2(1234);
    
    auto f4 = m.mutable_f4();
    auto f4_map = f4->mutable_f1();    
    Test2_TestInner3_TestInner3_2 f4_one;
    f4_one.set_f1(111);
    f4_one.set_f2(1111);
    (*f4_map)["one"] = f4_one;
    Test2_TestInner3_TestInner3_2 f4_two;
    f4_two.set_f1(222);
    f4_two.set_f2(2222);
    (*f4_map)["two"] = f4_two;
    Test2_TestInner3_TestInner3_2 f4_three;
    f4_three.set_f1(333);
    f4_three.set_f2(3333);
    (*f4_map)["three"] = f4_three;
    Test2_TestInner3_TestInner3_2 f4_four;
    f4_four.set_f1(444);
    f4_four.set_f2(4444);
    (*f4_map)["four"] = f4_four;    
    f4->set_f2(Test2_TestEnum::Test2_TestEnum_VALUE_1);
    f4->mutable_f3();
    
    m.mutable_f5();
    
    auto f6 = m.mutable_f6();
    auto f6_map = f6->mutable_f1();    
    Test2_TestInner3_TestInner3_2 f6_one;
    f6_one.set_f1(111);
    f6_one.set_f2(1111);
    (*f6_map)["one"] = f6_one;
    Test2_TestInner3_TestInner3_2 f6_two;
    f6_two.set_f1(222);
    f6_two.set_f2(2222);
    (*f6_map)["two"] = f6_two;
    Test2_TestInner3_TestInner3_2 f6_three;
    f6_three.set_f1(333);
    f6_three.set_f2(3333);
    (*f6_map)["three"] = f6_three;
    Test2_TestInner3_TestInner3_2 f6_four;
    f6_four.set_f1(444);
    f6_four.set_f2(4444);
    (*f6_map)["four"] = f6_four;    
    f6->set_f2(Test2_TestEnum::Test2_TestEnum_VALUE_1);
    f6->mutable_f3();
    
    auto f7 = m.mutable_f7();
    f7->add_f1(1.2340000152587890625e1);
    f7->add_f1(5.6779998779296875e1);
    f7->set_f2(1.2340000152587890625e1);
    f7->set_f3("sample text");
    
    m.SerializeToString(&out);
    return out;
}

std::string test2_4() {
    std::string out;
    Test2 m;
    
    auto f6 = m.mutable_f6();
    auto map = f6->mutable_f1();
    
    Test2_TestInner3_TestInner3_2 one;
    one.set_f1(111);
    one.set_f2(1111);
    (*map)["one"] = one;
    Test2_TestInner3_TestInner3_2 two;
    two.set_f1(222);
    two.set_f2(2222);
    (*map)["two"] = two;
    Test2_TestInner3_TestInner3_2 three;
    three.set_f1(333);
    three.set_f2(3333);
    (*map)["one"] = three;
    Test2_TestInner3_TestInner3_2 four;
    four.set_f1(444);
    four.set_f2(4444);
    (*map)["two"] = four;
    
    m.SerializeToString(&out);
    return out;
}

std::string test4() {
    std::string out;
    Test4 m;
    
    m.set_f1(1234);
    m.set_f2("hello");
    m.set_f3(1.2340000152587890625e1);
    m.set_f4(1.2340000152587890625e1);
    
    m.SerializeToString(&out);
    return out;
}

std::string test4_map() {
    std::string out;
    Test4 m;
    
    auto f5 = m.mutable_f5();
    (*f5)[5] = 6;
    (*f5)[1] = 2;
    (*f5)[3] = 4;
    
    m.SerializeToString(&out);
    return out;
}

std::string test4_map_dup() {
    std::string out;
    Test4 m;
    
    auto f5 = m.mutable_f5();
    (*f5)[1] = 10;
    (*f5)[2] = 20;
    (*f5)[1] = 20;
    (*f5)[2] = 200;
    
    m.SerializeToString(&out);
    return out;
}

// -------------------------------------------------------

std::string str_to_bytes(const std::string& str) {
    std::string out = "<<";
    for (size_t i = 0; i < str.length(); i++) {
        out += std::to_string((uint8_t) str.at(i));
        if (i != str.length() - 1) {
            out += ",";
        }
    }
    out += ">>";
    return out;
}

void exec(bool save_to_file, const std::vector<std::string>& tests_names) {
    const std::string out_dir_path = "testout3/";
    
    std::unordered_map<std::string, std::function<std::string(void)>> test_cases = {
            // single fields
            
            {"f_double", f_double},
            {"f_float", f_float},
            {"f_int32", f_int32},
            {"f_int64", f_int64},
            {"f_uint32", f_uint32},
            {"f_uint64", f_uint64},
            {"f_sint32", f_sint32},
            {"f_sint64", f_sint64},
            {"f_fixed32", f_fixed32},
            {"f_fixed64", f_fixed64},
            {"f_sfixed32", f_sfixed32},
            {"f_sfixed64", f_sfixed64},
            {"f_bool", f_bool},
            {"f_string", f_string},
            {"f_bytes", f_bytes},
            {"f_map", f_map},
            {"f_oneof_f1", f_oneof_f1},
            {"f_oneof_f2", f_oneof_f2},
            {"f_empty_out", f_empty_out},
            {"f_enum_out", f_enum_out},
            {"f_empty_inner", f_empty_inner},
            {"f_enum_inner", f_enum_inner},
            
            // repeated fields
            
            {"rf_double", rf_double},
            {"rf_float", rf_float},
            {"rf_int32", rf_int32},
            {"rf_int64", rf_int64},
            {"rf_uint32", rf_uint32},
            {"rf_uint64", rf_uint64},
            {"rf_sint32", rf_sint32},
            {"rf_sint64", rf_sint64},
            {"rf_fixed32", rf_fixed32},
            {"rf_fixed64", rf_fixed64},
            {"rf_sfixed32", rf_sfixed32},
            {"rf_sfixed64", rf_sfixed64},
            {"rf_bool", rf_bool},
            {"rf_string", rf_string},
            {"rf_bytes", rf_bytes},
            {"rf_empty_out", rf_empty_out},
            {"rf_enum_out", rf_enum_out},
            {"rf_empty_inner", rf_empty_inner},
            {"rf_enum_inner", rf_enum_inner},
            
            // empty repeated fields
            
            {"rf_double_empty", rf_double_empty},
            {"rf_float_empty", rf_float_empty},
            {"rf_int32_empty", rf_int32_empty},
            {"rf_int64_empty", rf_int64_empty},
            {"rf_uint32_empty", rf_uint32_empty},
            {"rf_uint64_empty", rf_uint64_empty},
            {"rf_sint32_empty", rf_sint32_empty},
            {"rf_sint64_empty", rf_sint64_empty},
            {"rf_fixed32_empty", rf_fixed32_empty},
            {"rf_fixed64_empty", rf_fixed64_empty},
            {"rf_sfixed32_empty", rf_sfixed32_empty},
            {"rf_sfixed64_empty", rf_sfixed64_empty},
            {"rf_bool_empty", rf_bool_empty},
            {"rf_string_empty", rf_string_empty},
            {"rf_bytes_empty", rf_bytes_empty},
            
            // repeated fields packed
            
            {"rfu_double", rfu_double},
            {"rfu_float", rfu_float},
            {"rfu_int32", rfu_int32},
            {"rfu_int64", rfu_int64},
            {"rfu_uint32", rfu_uint32},
            {"rfu_uint64", rfu_uint64},
            {"rfu_sint32", rfu_sint32},
            {"rfu_sint64", rfu_sint64},
            {"rfu_fixed32", rfu_fixed32},
            {"rfu_fixed64", rfu_fixed64},
            {"rfu_sfixed32", rfu_sfixed32},
            {"rfu_sfixed64", rfu_sfixed64},
            {"rfu_bool", rfu_bool},
            
            // default values
            
            {"f_int32_default", f_int32_default},
            {"f_string_default", f_string_default},
            {"f_bytes_default", f_bytes_default},
            
            // other tests
            
            {"test2_testinner3_testinner32", test2_testinner3_testinner32},
            {"test2_testinner3_testinner32_empty", test2_testinner3_testinner32_empty},
            {"rf_inner_ene", rf_inner_ene},
            {"rf_inner_nen", rf_inner_nen},
            {"simple_all", simple_all},
            {"test2_1", test2_1},
            {"test2_2", test2_2},
            {"test2_3", test2_3},
            {"test2_4", test2_4},
            {"test4", test4},
            {"test4_map", test4_map},
            {"test4_map_dup", test4_map_dup},
    };
    for (auto& test_name : tests_names) {
        if (test_cases.find(test_name) != test_cases.end()) {
            std::string result = test_cases[test_name]();
            std::cout << test_name << " = " << str_to_bytes(result) << std::endl;            
            if (save_to_file) {
                std::string filename = out_dir_path + test_name + ".v3ref";
                std::ofstream file(filename);
                if (file.is_open()) {
                    file << result;
                    file.close();
                } else {
                    std::cout << test_name << ": open output file fail, skip." << std::endl;
                }
            }
        } else {
            std::cout << test_name << ": not exist, skip." << std::endl;
        }
    }
}

int main() {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    std::cout << "begin tests v2" << std::endl;
    exec(true, {
             "f_double",
             "f_float",
             "f_int32",
             "f_int64",
             "f_uint32",
             "f_uint64",
             "f_sint32",
             "f_sint64",
             "f_fixed32",
             "f_fixed64",
             "f_sfixed32",
             "f_sfixed64",
             "f_bool",
             "f_string",
             "f_bytes",
             "f_map",
             "f_oneof_f1",
             "f_oneof_f2",
             "f_empty_out",
             "f_enum_out",
             "f_empty_inner",
             "f_enum_inner",
             
             "rf_double",
             "rf_float",
             "rf_int32",
             "rf_int64",
             "rf_uint32",
             "rf_uint64",
             "rf_sint32",
             "rf_sint64",
             "rf_fixed32",
             "rf_fixed64",
             "rf_sfixed32",
             "rf_sfixed64",
             "rf_bool",
             "rf_string",
             "rf_bytes",
             "rf_empty_out",
             "rf_enum_out",
             "rf_empty_inner",
             "rf_enum_inner",
             
             "rf_double_empty",
             "rf_float_empty",
             "rf_int32_empty",
             "rf_int64_empty",
             "rf_uint32_empty",
             "rf_uint64_empty",
             "rf_sint32_empty",
             "rf_sint64_empty",
             "rf_fixed32_empty",
             "rf_fixed64_empty",
             "rf_sfixed32_empty",
             "rf_sfixed64_empty",
             "rf_bool_empty",
             "rf_string_empty",
             "rf_bytes_empty",
             
             "rfu_double",
             "rfu_float",
             "rfu_int32",
             "rfu_int64",
             "rfu_uint32",
             "rfu_uint64",
             "rfu_sint32",
             "rfu_sint64",
             "rfu_fixed32",
             "rfu_fixed64",
             "rfu_sfixed32",
             "rfu_sfixed64",
             "rfu_bool",
             
             "f_int32_default",
             "f_string_default",
             "f_bytes_default",
             
             "test2_testinner3_testinner32",
             "test2_testinner3_testinner32_empty",
             "rf_inner_ene",
             "rf_inner_nen",
             "simple_all",
             "test2_1",
             "test2_2",
             "test2_3",
             "test2_4",
             "test4",
             "test4_map",
             "test4_map_dup"
    });

    google::protobuf::ShutdownProtobufLibrary();
    return 0;
}
