package de.novensa.cs.performance.macadamia.management.jvm;

import de.novensa.cs.performance.macadamia.management.jvm.resources.AbstractCrucialJvmResources;
import de.novensa.cs.performance.macadamia.management.jvm.resources.JvmResourceDetails;

import javax.annotation.Nullable;
import java.util.concurrent.TimeUnit;


public class UniformDistributedCrucialJvmResources extends AbstractCrucialJvmResources {


    @Override
    public void scheduleUpdates() {
        this.add(new JvmResourceDetails());
    }


    
    public UniformDistributedCrucialJvmResources(long initDelay, long period, @Nullable TimeUnit timeUnit) {
        super(initDelay, period, timeUnit);
    }
}
