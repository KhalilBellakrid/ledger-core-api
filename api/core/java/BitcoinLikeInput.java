// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

package co.ledger.core;

import java.util.concurrent.atomic.AtomicBoolean;

/**Class representing Bitcoin inputs */
public abstract class BitcoinLikeInput {
    /**
     *Get address that spends the input
     *@return Optional String, address emmiting input
     */
    public abstract String getAddress();

    /**
     *Get amount of input
     *@return Optional Amount object, amount of input
     */
    public abstract Amount getValue();

    /**
     *Check whether input
     *@return Boolean, true if input belongs to coinbase transaction (reward for mining a block)
     */
    public abstract boolean isCoinbase();

    /**
     *Stored data cointained in coinbase
     *@return Optional String
     */
    public abstract String getCoinbase();

    /**
     *Get hash of previous transaction that generates that input
     *@return Optional String, hash of previous transaction (null if coinbase)
     */
    public abstract String getPreviousTxHash();

    /**
     *Get output index, it identifies which UTXO from tht transaction to spend
     *@return Optional 32 bits integer, index of previous transaction
     */
    public abstract Integer getPreviousOutputIndex();

    private static final class CppProxy extends BitcoinLikeInput
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public String getAddress()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getAddress(this.nativeRef);
        }
        private native String native_getAddress(long _nativeRef);

        @Override
        public Amount getValue()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getValue(this.nativeRef);
        }
        private native Amount native_getValue(long _nativeRef);

        @Override
        public boolean isCoinbase()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_isCoinbase(this.nativeRef);
        }
        private native boolean native_isCoinbase(long _nativeRef);

        @Override
        public String getCoinbase()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getCoinbase(this.nativeRef);
        }
        private native String native_getCoinbase(long _nativeRef);

        @Override
        public String getPreviousTxHash()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getPreviousTxHash(this.nativeRef);
        }
        private native String native_getPreviousTxHash(long _nativeRef);

        @Override
        public Integer getPreviousOutputIndex()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getPreviousOutputIndex(this.nativeRef);
        }
        private native Integer native_getPreviousOutputIndex(long _nativeRef);
    }
}
