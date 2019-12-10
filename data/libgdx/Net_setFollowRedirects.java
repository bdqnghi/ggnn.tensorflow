/**
 * Sets whether 301 and 302 redirects are followed. By default true. Can't be changed in the GWT backend because this uses
 * XmlHttpRequests which always redirect.
 * @param followRedirects whether to follow redirects.
 * @exception IllegalArgumentException if redirection is disabled on the GWT backend.
 */
public void setFollowRedirects(boolean followRedirects) throws IllegalArgumentException {
    if (followRedirects == true || Gdx.app.getType() != ApplicationType.WebGL) {
        this.followRedirects = followRedirects;
    } else {
        throw new IllegalArgumentException("Following redirects can't be disabled using the GWT/WebGL backend!");
    }
}
