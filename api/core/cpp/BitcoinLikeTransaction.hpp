// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKETRANSACTION_HPP
#define DJINNI_GENERATED_BITCOINLIKETRANSACTION_HPP

#include "../../../../core/src/utils/optional.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

class Amount;
class BitcoinLikeBlock;
class BitcoinLikeInput;
class BitcoinLikeOutput;

/**Class representing a Bitcoin transaction */
class BitcoinLikeTransaction {
public:
    virtual ~BitcoinLikeTransaction() {}

    /**
     *Get transaction hash
     *@return string, transaction hash
     */
    virtual std::string getHash() = 0;

    /**
     *Get list of inputs aggregated under that transaction
     *@return list of BitcoinLikeInput objects
     */
    virtual std::vector<std::shared_ptr<BitcoinLikeInput>> getInputs() = 0;

    /**
     *Get list of outputs aggregated under that transaction
     *@return list of BitcoinLikeOutput objects
     */
    virtual std::vector<std::shared_ptr<BitcoinLikeOutput>> getOutputs() = 0;

    /**
     *Get block to which this transaction belongs
     *@return Optional BitcoinLikeBlock
     */
    virtual std::shared_ptr<BitcoinLikeBlock> getBlock() = 0;

    /**
     *Get lock time of transaction, block height from which transaction may be accepted by miners
     *@return 64 bits integer, block height after which transaction can be accepted
     */
    virtual int64_t getLockTime() = 0;

    /**
     *Get fees payed for this transaction
     *@return Amount object, amount of fees
     */
    virtual std::shared_ptr<Amount> getFees() = 0;

    /**
     *Get time of creation of this transaction
     *@return Date object
     */
    virtual std::chrono::system_clock::time_point getTime() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKETRANSACTION_HPP
