// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_public_key_provider.djinni

package co.ledger.core;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class BitcoinLikeExtendedPublicKeyProvider {
    public static native BitcoinLikeExtendedPublicKeyProvider fromBitcoinLikeBase58ExtendedPublicKeyProvider(BitcoinLikeBase58ExtendedPublicKeyProvider provider);

    public static native BitcoinLikeExtendedPublicKeyProvider fromBitcoinLikePublicKeyProvider(BitcoinLikePublicKeyProvider provider);

    private static final class CppProxy extends BitcoinLikeExtendedPublicKeyProvider
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
    }
}
