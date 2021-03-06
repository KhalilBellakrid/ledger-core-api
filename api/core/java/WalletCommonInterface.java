// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_common_interface.djinni

package co.ledger.core;

import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class WalletCommonInterface {
    public abstract String getIdentifier();

    public abstract String getWalletName();

    public abstract CryptoCurrencyDescription getCrypoCurrencyDescription();

    public abstract WalletType getWalletType();

    public abstract Amount getTotalBalance();

    public abstract int getAccountsCount();

    public abstract ArrayList<Amount> getAccountBalances();

    public abstract int getOperationsCount();

    public abstract ArrayList<Integer> getAccountOperationsCount();

    public abstract Preferences getPreferences();

    public abstract Preferences getSynchronizedPreferences();

    public abstract BitcoinLikeWallet asInstanceOfBitcoinWallet();

    public abstract EthereumLikeWallet asInstanceOfEthereumWallet();

    private static final class CppProxy extends WalletCommonInterface
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
        public String getIdentifier()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getIdentifier(this.nativeRef);
        }
        private native String native_getIdentifier(long _nativeRef);

        @Override
        public String getWalletName()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getWalletName(this.nativeRef);
        }
        private native String native_getWalletName(long _nativeRef);

        @Override
        public CryptoCurrencyDescription getCrypoCurrencyDescription()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getCrypoCurrencyDescription(this.nativeRef);
        }
        private native CryptoCurrencyDescription native_getCrypoCurrencyDescription(long _nativeRef);

        @Override
        public WalletType getWalletType()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getWalletType(this.nativeRef);
        }
        private native WalletType native_getWalletType(long _nativeRef);

        @Override
        public Amount getTotalBalance()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getTotalBalance(this.nativeRef);
        }
        private native Amount native_getTotalBalance(long _nativeRef);

        @Override
        public int getAccountsCount()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getAccountsCount(this.nativeRef);
        }
        private native int native_getAccountsCount(long _nativeRef);

        @Override
        public ArrayList<Amount> getAccountBalances()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getAccountBalances(this.nativeRef);
        }
        private native ArrayList<Amount> native_getAccountBalances(long _nativeRef);

        @Override
        public int getOperationsCount()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getOperationsCount(this.nativeRef);
        }
        private native int native_getOperationsCount(long _nativeRef);

        @Override
        public ArrayList<Integer> getAccountOperationsCount()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getAccountOperationsCount(this.nativeRef);
        }
        private native ArrayList<Integer> native_getAccountOperationsCount(long _nativeRef);

        @Override
        public Preferences getPreferences()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getPreferences(this.nativeRef);
        }
        private native Preferences native_getPreferences(long _nativeRef);

        @Override
        public Preferences getSynchronizedPreferences()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getSynchronizedPreferences(this.nativeRef);
        }
        private native Preferences native_getSynchronizedPreferences(long _nativeRef);

        @Override
        public BitcoinLikeWallet asInstanceOfBitcoinWallet()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_asInstanceOfBitcoinWallet(this.nativeRef);
        }
        private native BitcoinLikeWallet native_asInstanceOfBitcoinWallet(long _nativeRef);

        @Override
        public EthereumLikeWallet asInstanceOfEthereumWallet()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_asInstanceOfEthereumWallet(this.nativeRef);
        }
        private native EthereumLikeWallet native_asInstanceOfEthereumWallet(long _nativeRef);
    }
}
