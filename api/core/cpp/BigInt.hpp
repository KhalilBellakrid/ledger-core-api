// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from big_int.djinni

#ifndef DJINNI_GENERATED_BIGINT_HPP
#define DJINNI_GENERATED_BIGINT_HPP

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

/** Immutable class representing a potentially very long number */
class BigInt {
public:
    virtual ~BigInt() {}

    /**
     * Adds two BigInt and returns a new BigInt with the result.
     * @params i Value to be added to this BigInt
     * @return The result of this + i
     */
    virtual std::shared_ptr<BigInt> add(const std::shared_ptr<BigInt> & i) = 0;

    /**
     * Subtracts two BigInt and returns a new BigInt with result.
     * @params i Value to be subtracted to this BigInt
     * @return The result of this - i
     */
    virtual std::shared_ptr<BigInt> subtract(const std::shared_ptr<BigInt> & i) = 0;

    /**
     * Multiplies two BigInt and returns a new BigInt with result.
     * @params i Value to be multiplied by this BigInt
     * @return The result of this * i
     */
    virtual std::shared_ptr<BigInt> multiply(const std::shared_ptr<BigInt> & i) = 0;

    /**
     * Divides two BigInt and returns a new BigInt with result.
     * @params i Value by which this BigInt will be divided
     * @return The result of this / i
     */
    virtual std::shared_ptr<BigInt> divide(const std::shared_ptr<BigInt> & i) = 0;

    /**
     * Divides two BigInt and returns a new BigInt with result of the division and the remainder.
     * @params i Value by which this BigInteger is to be divided, and the remainder computed
     * @return A tuple of [this / i, this % i]
     */
    virtual std::vector<std::shared_ptr<BigInt>> divideAndRemainder(const std::shared_ptr<BigInt> & i) = 0;

    /**
     * Raises this BigInt with an interger value.
     * @params i The exponent to which thi BigInt is raised
     * @return The result of this ^ exponent
     */
    virtual std::shared_ptr<BigInt> pow(int32_t exponent) = 0;

    /**
     * Formats this BigInt to a decimal string (e.g. BigInt("12345").toDecimalString(1, ".", ",") => "1,234.5")
     * @params precision The power of ten by wich this BigInt is divided
     * @params decimalSeparator The separator to use between the integer part and the decimal part
     * @params thousandSeparator The separator to use between each group of thousand units
     * @return The BigInt formatted as a decimal string
     */
    virtual std::string toDecimalString(int32_t precision, const std::string & decimalSeparator, const std::string & thousandSeparator) = 0;

    /**
     * Formats this BigInt to the interger representation of its internal value.
     * @params radix The radix of the number representation in which to format (right now 10 or 16)
     */
    virtual std::string toString(int32_t radix) = 0;

    /**
     * Returns the int representation of this BigInt. Note that if the BigInt is greater than 4 bytes the returned value
     * will be meaningless.
     * @return The int representation of this BigInt
     */
    virtual int32_t intValue() = 0;

    /**
     * Compares two BigInt together.
     * @param i The value to compare with this BigInt
     * @return a positive value if this > i. A negative value if this < i. 0 if the two BigInts are equal
     */
    virtual int32_t compare(const std::shared_ptr<BigInt> & i) = 0;

    /**
     * Creates a BigInt with a decimal string (e.g. "1.2000"). Note that every non numeric characters (except the decimal separator)
     * are ignored (e.g. "1ledger000" will be equal to "1000")
     * @param s The string with the decimal representation of the BigInt
     * @param precision The power of ten by which your decimal number must be multiplied in order to get his integer representation
     * @params decimalSeparator The decimal separator used by this string representation
     * @return The created BigInt
     */
    static std::shared_ptr<BigInt> fromDecimalString(const std::string & s, int32_t precision, const std::string & decimalSeparator);

    /**
     * Creates a BigInt with an integer string expressed in hexadecimal or decimal radix.
     * @param s The string to parse
     * @param radix The radix of the number representation (right now 10 or 16)
     * @return The created BigInt
     */
    static std::shared_ptr<BigInt> fromIntegerString(const std::string & s, int32_t radix);

    /**
     * Creates a BigInt from a int64 value
     * @param l The value to convert
     * @return The created BigInt
     */
    static std::shared_ptr<BigInt> fromLong(int64_t l);
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BIGINT_HPP
