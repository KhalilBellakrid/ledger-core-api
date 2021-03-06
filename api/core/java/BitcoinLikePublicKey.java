// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_public_key_provider.djinni

package co.ledger.core;

public final class BitcoinLikePublicKey {


    /*package*/ final byte[] publicKey;

    /*package*/ final byte[] chainCode;

    public BitcoinLikePublicKey(
            byte[] publicKey,
            byte[] chainCode) {
        this.publicKey = publicKey;
        this.chainCode = chainCode;
    }

    public byte[] getPublicKey() {
        return publicKey;
    }

    public byte[] getChainCode() {
        return chainCode;
    }

    @Override
    public String toString() {
        return "BitcoinLikePublicKey{" +
                "publicKey=" + publicKey +
                "," + "chainCode=" + chainCode +
        "}";
    }

}
